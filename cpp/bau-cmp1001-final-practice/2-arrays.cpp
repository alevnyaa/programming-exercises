//get char array of size 10 and a specific char
//function to return number of times a char is in the array 

#include <iostream>
using namespace std;
/*
int howMany(char[] word, char ch){
  int count = 0;
  for(int i=0; i<10; i++){
    if(word[i] == ch){
      count++;
    }
  }
  return count;
}
*/
int main(){
  char word[10];
  for(int i=0; i<10; i++){
    char ch;
    cin >> ch;
    word[i] = ch;
  }
  cout << endl;
  for(int i=0; i<10; i++){
    cout >> word[i];
  }
  //cout << howMany(word, 'a');
}
