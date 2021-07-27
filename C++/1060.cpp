#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  int sum = 0;
  float num;
  for (int i = 0; i < 6; i++){
    cin >> num;
    if(num > 0) sum++;
  }
  cout << sum << " valores positivos" << endl;
  return 0;
}