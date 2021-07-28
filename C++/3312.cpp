#include <iostream>
#include <cmath>

/* 

  Fazer !!!!!!!!!!!!!!

 */

using namespace std;

bool isPrime(int num){
  int _sqrt = sqrt(num);
  bool div;

  div = true;
  for (int i = 2; i < _sqrt; i++){
    if(num%i == 0) div = false;
  }
  
  return div;
}

int main(int argc, char const *argv[]){
  int n, num;

  cin >> n;
  while(n--){
    cin >> num;
    if(isPrime(num)){

    }
  }
  return 0;
}