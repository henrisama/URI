#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){
  string date;

  cin >> date;

  printf("%c%c/%c%c/%c%c\n", date[3], date[4], date[0], date[1], date[6], date[7]);
  printf("%c%c/%c%c/%c%c\n", date[6], date[7], date[3], date[4], date[0], date[1]);
  printf("%c%c-%c%c-%c%c\n", date[0], date[1], date[3], date[4], date[6], date[7]);
  return 0;
}