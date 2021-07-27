#include <iostream>
#include <math.h>

using namespace std;

int maiorXY(int x, int y){
  return (x+y+abs(x-y))/2;
}

int main(int argc, char const *argv[])
{
  int a, b, c, aux;

  cin >> a >> b >> c;

  aux = maiorXY(a,b);

  cout << maiorXY(aux, c) << " eh o maior" << endl;

  return 0;
}
