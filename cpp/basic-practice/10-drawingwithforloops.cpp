//draw dynamic size (get from user) triangles
//with all 4 possible shapes

#include <iostream>
using namespace std;

int main(){
  cout << "Input size of triangles." << endl;
  int num;
  cin >> num;
  int curline = 0;
  
  for(int i=0; i<num; i++){
    curline++;
    for(int j=0; j<curline; j++){
      cout << "*";  
    } 
    cout << endl;
  }

  cout << "--------------------" << endl;

  curline = num + 1;
  for(int i=0; i<num; i++){
    curline--;
    for(int j=0; j<curline; j++){
      cout << "*";  
    } 
    cout << endl;
  }

  cout << "--------------------" << endl;
  
  int spaces = 0;

  for(int i=0; i<num; i++){
    for(int j=0; j<spaces; j++){
      cout << " ";
    }
    for(int j=0; j<num-spaces; j++){
      cout << "*";
    }
    spaces++;
    cout << endl;
  }

  cout << "--------------------" << endl;
 
  spaces = num-1;

  for(int i=0; i<num; i++){
    for(int j=0; j<spaces; j++){
      cout << " ";
    }
    for(int j=0; j<num-spaces; j++){
      cout << "*";
    }
    spaces--;
    cout << endl;
  }
}
