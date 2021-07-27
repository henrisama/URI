#include <iostream>
#include <math.h>

using namespace std;

float distance(float x1, float y1, float x2, float y2){
  return sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
}

int main(int argc, char const *argv[]){
  float x1,y1,x2,y2;

  cin >> x1 >> y1 >> x2 >> y2;
  
  printf("%.4f\n", distance(x1,y1,x2,y2));
  return 0;
}