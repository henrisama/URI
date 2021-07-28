#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  float a, b;
  double c, d;

  cin >> a >> b;
  cin >> c >> d;

  printf("A = %.6f, B = %.6f\nC = %.6lf, D = %.6lf\n", a, b, c, d);
  printf("A = %.1f, B = %.1f\nC = %.1lf, D = %.1lf\n", a, b, c, d);
  printf("A = %.2f, B = %.2f\nC = %.2lf, D = %.2lf\n", a, b, c, d);
  printf("A = %.3f, B = %.3f\nC = %.3lf, D = %.3lf\n", a, b, c, d);
  printf("A = %.3E, B = %.3E\nC = %.3E, D = %.3E\n", a, b, c, d);
  printf("A = %.0f, B = %.0f\nC = %.0lf, D = %.0lf\n", a, b, c, d);

  return 0;
}