#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  double a, b, c, a2, b2, c2, aux;

  cin >> a >> b >> c;

  if(a < b){
    aux = a; a = b; b = aux;
  }
  if(b < c){
    aux = b; b = c; c = aux;
  }
  if(a < b){
    aux = a; a = b; b = aux;
  }

  a2 = a*a;
  b2 = b*b;
  c2 = c*c;

  if(a >= (b+c)){
    cout << "NAO FORMA TRIANGULO" << endl;
  }else if(a2 == (b2+c2)){
    cout << "TRIANGULO RETANGULO" << endl;
  }else if(a2 > (b2+c2)){
    cout << "TRIANGULO OBTUSANGULO" << endl;
  }else{
    cout << "TRIANGULO ACUTANGULO" << endl;
  }

  if(a == b && a == c){
    cout << "TRIANGULO EQUILATERO" << endl;
  }else if(a == b || a == c || b == c){
    cout << "TRIANGULO ISOSCELES" << endl;
  }

  return 0;
}