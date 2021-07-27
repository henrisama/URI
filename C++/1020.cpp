#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  int num;
  cin >> num;
  printf("%d ano(s)\n", num/365);
  printf("%d mes(es)\n", (num%365)/30);
  printf("%d dia(s)\n", (num%365)%30);
  return 0;
}