#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  float a, b, c;

  cin >> a >> b >> c;

  if(abs(b-c) < a && a < (b+c)){
    printf("Perimetro = %.1f\n", a+b+c);
  }else{
    printf("Area = %.1f\n", ((a+b)*c)/2);
  }
  return 0;
}