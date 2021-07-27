#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  int h, m;
  double porcent;

  while(cin >> h >> m){
    porcent = (h)/360.0;
    printf("%02.0f:", (12*porcent));

    porcent = m/360.0;
    printf("%02.0f\n", (60*porcent));
  }

  return 0;
}