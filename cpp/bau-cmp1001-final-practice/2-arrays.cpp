//get char array of size 10 and a specific char
//function to return number of times a char is in the array 

#include <iostream>
using namespace std;

int howMany(char w[], char ch){
  int count = 0;
  for(int i=0; i<10; i++){
    if(w[i] == ch){
      count++;
    }
  }
  return count;
}

int main(){
  char w[10];
  cout << "Input 10 characters, pressing enter after each character." << endl;
  for(int i=0; i<10; i++){
    cin >> w[i];
  }
  char ch;
  cout << "Input a character to count how many of those exist in the array." << endl;
  cin >> ch; 
  cout << howMany(w, ch) << endl;
}
