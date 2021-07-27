#include <iostream>

using namespace std;
typedef long long int lli;

lli fat(int n){
  if(n == 1 || n == 0)
    return 1;

  return fat(n-1)*n;
}

int main(int argc, char const *argv[]){
  int M, N;

  while(cin >> M >> N){
    cout << (fat(M) + fat(N)) << endl;
  }

  return 0;
}