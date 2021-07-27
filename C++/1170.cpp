#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  int n, sum;
  float num;

  cin >> n;
  while (n--){
    sum = 0;
    cin >> num;
    if(num >= 2){
      while(num > 1){
        sum++; 
        num /= 2;
      }
    }
    cout << sum << " dias" << endl;
  }
  
  return 0;
}