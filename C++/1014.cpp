#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  int distance;
  float kmL;

  cin >> distance >> kmL;

  printf("%.3f km/l\n", distance/kmL);
  return 0;
}