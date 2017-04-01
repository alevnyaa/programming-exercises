//get 10 doubles into array
//reverse the order

#include <iostream>
using namespace std;

int main(){
  cout << "Input 10 numbers to be reversed." << endl;
  double num[10];
  cout << "Input:" << endl;
  for(int i=0; i<10; i++){
    cin >> num[i];
  }
  double reversed[10];
  for(int i=0; i<10; i++){
    reversed[i] = num[9-i];
  }
  cout << "Reversed:" << endl;
  for(int i=0; i<10; i++){
    cout << reversed[i] << endl;
  }
}
