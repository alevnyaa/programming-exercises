//dynamic array of invoices
//function displays them in order of input
//also stating if they're above, below or equal to the average of all invoices

#include <iostream>
using namespace std;

int* addToArray(int* arrin, int num){
  int len = sizeof(arrin)/sizeof(arrin[0]);
  int* arrout = new int[len+1];
  for(int i=0; i<len; i++){
    arrout[i] = arrin[i];
  }
  delete[] arrin;
  arrout[len] = num;
  return arrout;
}

int main(){
  int* nums = new int[1];
  cout << "Input invoices, and end with the number 0." << endl;
  cin >> nums[0];
  int num = 1;
  while (num != 0){
    nums = addToArray(nums, num); 
    cin >> num;
  }
  int len = sizeof(nums)/sizeof(nums[0]);
  int sum = 0;
  for(int i=0; i<len; i++){
    sum += nums[i];
  }
  int avg = sum / len;
  for(int i=0; i<len; i++){ 
    cout << nums[i];
    if(nums[i] > avg){
      cout << "H";
    }else if(nums[i] < avg){
      cout << "L";
    }else{
      cout << "E";
    }
    cout << endl;
  }
}
