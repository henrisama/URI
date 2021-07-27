#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
  string leds;
  int n, len, sum;

  scanf("%d%*c", &n);

  for(int i = 0; i<n; i++){
    sum = 0;
    getline(cin, leds);
    len = strlen(leds.c_str());

    for(int j = 0; j<len; j++){
      switch (leds[j])
      {
        case '0':
          sum += 6;
          break;
        case '1':
          sum += 2;
          break;
        case '2':
          sum += 5;
          break;
        case '3':
          sum += 5;
          break;
        case '4':
          sum += 4;
          break;
        case '5':
          sum += 5;
          break;
        case '6':
          sum += 6;
          break;
        case '7':
          sum += 3;
          break;
        case '8':
          sum += 7;
          break;
        case '9':
          sum += 6;
          break;
        default:
          break;
      }
    }
    cout << sum << " leds" << endl;
  }

  return 0;
}
