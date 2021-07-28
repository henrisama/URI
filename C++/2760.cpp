#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){
  string a, b, c;
  int len, i;

  getline(cin, a);
  getline(cin, b);
  getline(cin, c);

  cout << a << b << c << endl;
  cout << b << c << a << endl;
  cout << c << a << b << endl;

  len = strlen(a.c_str());
  for (i = 0; i < len && i < 10; i++){
    cout << a[i];
  }

  len = strlen(b.c_str());
  for (i = 0; i < len && i < 10; i++){
    cout << b[i];
  }

  len = strlen(c.c_str());
  for (i = 0; i < len && i < 10; i++){
    cout << c[i];
  }

  cout << endl;
  
  return 0;
}