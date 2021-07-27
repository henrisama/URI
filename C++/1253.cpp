#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
  int n, len, shift;
  string cifer;

  scanf("%d%*c", &n);

  while(n--){
    getline(cin, cifer);
    scanf("%d%*c", &shift);
    len = strlen(cifer.c_str());

    for (int i = 0; i < len; i++){
      cifer[i] -= shift;
      if(cifer[i] < 65){
        cifer[i] += 26;
      }
    }
    
    cout << cifer << endl;
  }
  return 0;
}
