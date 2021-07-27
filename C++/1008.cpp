#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  int number, hours;
  float perHour;

  cin >> number >> hours >> perHour;
  
  cout << "NUMBER = " << number << endl;
  printf("SALARY = U$ %.2f\n", hours*perHour);
  return 0;
}
