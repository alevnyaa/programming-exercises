//roll two dices 100 times
//and count how many doubles you get

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
  int dice1[100];
  int dice2[100];
  
  srand(time(NULL));
  for(int i=0; i<100; i++){
    dice1[i] = rand() % 6;
  }
  
  for(int i=0; i<100; i++){
    dice2[i] = rand() % 6;
  }

  int doubles = 0;

  for(int i=0; i<100; i++){
    if(dice1[i] == dice2[i]){
      doubles++;
    }
  }

  cout << "There were " << doubles << " doubles." << endl;
}
