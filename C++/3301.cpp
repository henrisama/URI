#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  int a, b, c;

  cin >> a >> b >> c;

  if((b < a && a < c) || (c < a && a < b)){
    cout << "huguinho" << endl;
  }else if((a < b && b < c) || (c < b && b < a)){
    cout << "zezinho" << endl;
  }else{
    cout << "luisinho" << endl;
  }

  return 0;
}