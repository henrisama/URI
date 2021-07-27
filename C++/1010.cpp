#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int id, num;
  float value, sum;

  cin >> id >> num >> value;

  sum = num*value;

  cin >> id >> num >> value;

  sum = sum + (num*value);

  printf("VALOR A PAGAR: R$ %.2f\n", sum);

  return 0;
}
