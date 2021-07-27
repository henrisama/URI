#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  int n, num, aux;

  cin >> n;
  aux = n;

  while(n--){
    cin >> num;
    cout << "resposta " << aux-n << ": " << num << endl;
  }
  return 0;
}