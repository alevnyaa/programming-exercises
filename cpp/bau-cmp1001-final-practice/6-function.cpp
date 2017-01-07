//get three parameters
//display the multiples of the first number between the other two numbers

#include <iostream>
using namespace std;

void printMultiples(int num, int low, int high){
  int x = (low / num) + 1;
  int mult = num * x;
  while(mult < high){
    cout << mult << "\t";
    x += 1;
    mult = num * x;
  }
  cout << endl;
}

int main(){
  cout << "Testing for 2, 7, 17." << endl;
  printMultiples(2, 7, 17);
  cout << "Testing for 3, 12, 19." << endl;
  printMultiples(3, 12, 19);
  cout << "Testing for 7, 48, 71." << endl;
  printMultiples(7, 48, 71);
}
