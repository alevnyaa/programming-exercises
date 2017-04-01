//allowed to use mathematical libraries
//get a binary num, checking for validity, and then display decimal value

#include <iostream>
using namespace std;

int bin2dec(int n){
  int output = 0;
  for(int i=0; n > 0; i++) {
    if(n % 10 == 1) {
      output += (1 << i);
    }
    n /= 10;
  }
  return output;
}

bool checkBinary(int n){
	return true;
}

int main(){
	cout << "Input a binary number." << endl;
	int binum;
	cin >> binum;
  if(!checkBinary(binum)){
    return 1;
  }
  int decnum = bin2dec(binum);
  cout << decnum << endl;
}
