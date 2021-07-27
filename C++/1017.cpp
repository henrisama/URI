#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  int hours, kmh;

  cin >> hours >> kmh;

  printf("%.3f\n", (hours*kmh)/12.0);
  return 0;
}