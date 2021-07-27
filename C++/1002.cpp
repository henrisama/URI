#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
  double raio;
  cin >> raio;
  
  printf("A=%.4lf\n", 3.14159 * pow(raio, 2));
  return 0;
}