#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]){
  int n, len, middle;
  char str[100];

  scanf("%d%*c", &n);

  while(n > 0){
    scanf("%[^\n]%*c", str);
    len = strlen(str);
    middle = floor(len/2)-1;

    for (int i = middle; i >= 0; i--){
      cout << str[i];
    }

    for (int i = len-1; i > middle; i--){
      cout << str[i];
    }
    
    cout << endl;
    --n;
  }

  return 0;
}