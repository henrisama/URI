#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  double A, B, media;

  cin >> A >> B;

  media = ((A*3.5)+(B*7.5))/11;

  printf("MEDIA = %.5lf\n", media);
  
  return 0;
}
