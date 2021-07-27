#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
  double raio;

  cin >> raio;

  printf("VOLUME = %.3lf\n", (4.0/3)*3.14159*pow(raio,3));
  return 0;
}
