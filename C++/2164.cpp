#include <iostream>
#include <cmath>

using namespace std;

double binet(int n){
    return (1/sqrt(5)) * (pow((1 + sqrt(5))/2, n) - (pow((1 - sqrt(5))/2, n)));
}

int main(int argc, char const *argv[]){
  int n;
  cin >> n;
  printf("%.1lf\n", binet(n));
  return 0;
}