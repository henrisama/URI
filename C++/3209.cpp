#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  int n, K, O, result;

  cin >> n;

  while(n--){
    cin >> K;
    result = 0;
    while(K--){
      cin >> O;
      result += (O-1);
    }
    cout << result+1 << endl;
  }
  return 0;
}