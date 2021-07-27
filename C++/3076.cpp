#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  int n;

  while(cin >> n){
    if(n%100 == 0){
      cout << n/100 << endl;  
    }else{
      cout << (n/100)+1 << endl;
    }
  }
  return 0;
}