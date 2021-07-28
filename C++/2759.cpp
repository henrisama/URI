#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  char a, b, c;

  cin >> a >> b >> c;

  printf("A = %c, B = %c, C = %c\n", a, b, c);
  printf("A = %c, B = %c, C = %c\n", b, c, a);
  printf("A = %c, B = %c, C = %c\n", c, a, b);
  return 0;
}