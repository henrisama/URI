#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]){
  int v, n;
  double aux, sum;
  long long int result;
  cin >> v >> n;

  aux = (v*n)/10.0;
  sum = aux;
  for (int i = 0; i < 9; i++){
    result = ceil(sum-0.01);
    if(i == 8){
      cout << result << endl;  
    }else {
      cout << result << " ";
    }
    sum += aux;
  }
  return 0;
}