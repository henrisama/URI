#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]){
  int x, y;

  cin >> x >> y;

  if(x == y){
    cout << "O JOGO DUROU 24 HORA(S)" << endl;
  }else if(x > y){
    cout << "O JOGO DUROU " << abs(x-y-24) << " HORA(S)" << endl;
  }else{
    cout << "O JOGO DUROU " << (y-x) << " HORA(S)" << endl;
  }
  return 0;
}