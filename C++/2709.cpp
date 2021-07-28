#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num){
  if(num == 1)
    return false;

  int _sqrt = sqrt(num);
  bool div = true;

  for (int i = 2; i <= _sqrt; i++){
    if(num%i == 0) div = false;
  }
  
  return div;
}

int main(int argc, char const *argv[]){
  int m, v[20], n;
  int i, sum;
  while(cin >> m){
    sum = 0;
    for (i = 0; i < m; i++){
      cin >> v[i];
    }
    cin >> n;
    i--;
    while(i >= 0){
      sum += v[i];
      i -= n;
    }
  
    if(isPrime(sum)){
      cout << "You’re a coastal aircraft, Robbie, a large silver aircraft." << endl;
    }else{
      cout << "Bad boy! I’ll hit you." << endl;
    }
  }
  return 0;
}