#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
  double A, B, C;

  cin >> A >> B >> C;

  printf("TRIANGULO: %.3lf\n", A*C/2);
  printf("CIRCULO: %.3lf\n", 3.14159*pow(C,2));
  printf("TRAPEZIO: %.3lf\n", ((A+B)*C)/2);
  printf("QUADRADO: %.3lf\n", B*B);
  printf("RETANGULO: %.3lf\n", A*B);

  return 0;
}
