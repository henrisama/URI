#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  int nums, sum, aux, binary[32], i;

  sum = aux = i = 0;
  for(int i = 0; i < 4; i++){
    sum = 0;
    for (int j = 0; j < 7; j++){
      cin >> nums;
      sum += nums;
    }
    if(aux < sum) aux = sum;
  }
  cout << aux << " = ";

  while(aux > 0){
    if(aux&1) binary[i++] = 1;
    else binary[i++] = 0;
    aux >>= 1;
  }
  
  --i;
  for (i; i >= 0; i--){
    cout << binary[i];
  }

  cout << endl;
  return 0;
}