#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  float num, sum;
  char op;
  
  cin >> op;
  sum = 0;
  for (int i = 0; i < 12; i++){
    for (int j = 0; j < 12; j++){
      cin >> num;
      if(j > i) sum += num;
    }
  }
  
  if(op == 'S') printf("%.1f\n", sum);
  else if(op == 'M') printf("%.1f\n", sum/66);

  return 0;
}