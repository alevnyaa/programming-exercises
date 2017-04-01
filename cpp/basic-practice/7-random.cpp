//int array of size 50
//fill with between 120 and 300
//swap every other value position
//so that 0th is at 1st, and 1st at 0th
//and 2nd at 3rd, and 3rd at 2nd...etc.

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
  int nums[50];
  srand(time(NULL));
  for(int i=0; i<50; i++){
    nums[i] = rand() % 300 + 120;
  }
  cout << nums[0] << endl;
  cout << nums[1] << endl;
  cout << nums[2] << endl;
  cout << nums[3] << endl;
  for(int i=0; i<50; i+=2){
    int num = nums[i];
    nums[i] = nums[i+1];
    nums[i+1] = num;
  }
  cout << nums[0] << endl;
  cout << nums[1] << endl;
  cout << nums[2] << endl;
  cout << nums[3] << endl;
}
