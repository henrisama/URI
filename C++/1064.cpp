#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  float n, sum; 
  int pos;

  sum = pos = 0;
  for (int i = 0; i < 6; i++){
    cin >> n;
    if(n > 0){
      pos++;
      sum += n;
    }
  }

  cout << pos << " valores positivos" << endl;
  printf("%.1f\n", sum/pos);
  
  return 0;
}