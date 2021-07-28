#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  int x, y;
  float total;

  cin >> x >> y;

  switch (x){
    case 1:
      total = 4.00;
      break;
    case 2:
      total = 4.50;
      break;
    case 3:
      total = 5.00;
      break;
    case 4:
      total = 2.00;
      break;
    case 5:
      total = 1.50;
      break;
    default:
      break;
  }

  printf("Total: R$ %.2f\n", total*y);
  return 0;
}