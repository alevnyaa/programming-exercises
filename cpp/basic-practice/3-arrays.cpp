//get 10 DIFFERENT integers from user, prompting them if they repeat a value

#include <iostream>
using namespace std;

int main(){
  int nums[10];
  cout << "Input ten unique numbers:" << endl;
  cin >> nums[0];
  for(int i=1; i<10; i++){
    int num;
    cin >> num;
    bool exists = false;
    for(int j=i; j>=0; j--){
      if(nums[j] == num){
        exists = true;
        cout << "This number exists in the list." << endl;
        i--;
        break;
      }
    }
    if(!exists){
      nums[i] = num;
    }
  }
  for(int i=0; i<10; i++){
    cout << nums[i] << endl;
  }
}
