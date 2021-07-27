#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  unsigned long int a, b, result;

  while(cin >> a >> b){
    cout << (a^b) << endl;
  }

  return 0;
}