#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  int num;
  cin >> num;
  printf("%d:%d:%d\n", num/3600, (num%3600)/60, (num%3600)%60);
  return 0;
}