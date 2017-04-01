//get positive int
//if odd, assing 3x+1
//if even, x/2
//iterate until you get 1

#include <iostream>
using namespace std;

int main(){
  cout << "Input an integer to be iterated over." << endl;
  int num;
  cin >> num;

  while(num!=1){
    if(num%2==0){
      num/=2;
    }else{
      num = 3 * num + 1;
    }
    cout << num << endl;
  }
}
