#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  int x, y;
  int i, aux, sum;

  cin >> x >> y;
  if(y > x){
    aux = y;
    y = x;
    x = aux;
  }
  //x > y

  i = y+1;
  sum = 0;
  while(i < x){
    if(i%2 != 0) sum += i;
    i++;
  }

  cout << sum << endl;
  return 0;
}