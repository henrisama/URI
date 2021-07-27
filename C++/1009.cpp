#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
  string name;
  double salary, sales;

  getline(cin, name);
  cin >> salary >> sales;

  printf("TOTAL = R$ %.2lf\n", salary+(sales*0.15));
  return 0;
}
