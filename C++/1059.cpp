#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  for (int i = 2; i < 101; i++){
    if(i%2 == 0) cout << i << endl;
  }
  
  return 0;
}