//int array of size 50
//fill with random inclusive between 1 and 250
//make sure to seed random
//calc the sum of even numbers in odd indexes
//such as 1st, 3rd, 5th index

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
  srand(time(NULL));

  int arr[50];

  for(int i=0; i<50; i++){
    arr[i] = rand() % 250 + 1;
  }
  
  int sum = 0;

  for(int i=1; i<50; i+=2){
    if(arr[i]%2==0){
      sum += arr[i];
    }
  }

  cout << "The sum of even numbers in odd indexes is " << sum << "." << endl;
}
