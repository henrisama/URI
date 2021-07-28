#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  int m, n, i, sum, aux;

  while((cin >> m >> n) && (m > 0) && (n > 0)){
    sum = 0;

    if(n > m){
      aux = n;
      n = m;
      m = aux;
    }

    for (i = n; i <= m; i++){
      cout << i << " ";
      sum += i;
    }
    cout << "Sum=" << sum << endl;
  }
  return 0;
}