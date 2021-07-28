#include <iostream>

using namespace std;

void swap(int *a, int *b){
  int aux;
  aux = *a;
  *a = *b;
  *b = aux;
}

int main(int argc, char const *argv[]){
  int x, y;
  int i, aux, sum;

  cin >> x >> y;
  if(y > x){
    swap(&x, &y);
  }
  //x > y

  for (int i = y+1; i < x; i++){
    if(i%5 == 2 || i%5 == 3) cout << i << endl;
  }
  
  return 0;
}