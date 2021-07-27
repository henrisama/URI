#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  double A, B, C, media;

  cin >> A >> B >> C;

  media = ((A*2) + (B*3) + (C*5))/10;

  printf("MEDIA = %.1lf\n", media);
  return 0;
}
