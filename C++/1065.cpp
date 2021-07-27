#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  int sum = 0, num;
  for (int i = 0; i < 5; i++){
    cin >> num;
    if(num%2 == 0) sum++;
  }
  cout << sum << " valores pares" << endl;
  return 0;
}