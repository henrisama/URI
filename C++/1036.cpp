#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[]){
  double A, B, C, delta;

  cin >> A >> B >> C;

  delta = pow(B,2) - (4*A*C);
  if(delta < 0 || A == 0){
    cout << "Impossivel calcular" << endl;
  }else{
    double R1, R2, _sqrt;
    _sqrt = sqrt(delta);
    R1 = (-B+_sqrt)/(2*A);
    R2 = (-B-_sqrt)/(2*A);

    printf("R1 = %.5lf\n", R1);
    printf("R2 = %.5lf\n", R2);
  }

  return 0;
}