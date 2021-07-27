#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[]){
  int a, b, r, q;

  cin >> a >> b;

  r = a%b;

  if(r < 0){
    r = r + abs(b);
  }

  q = (a - r) / b;

  cout << q << " " << r << endl;

  return 0;
}