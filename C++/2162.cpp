#include <iostream>
#define MAX 20000 // -10000 <= h <= 10000
using namespace std;

int isStandard(int vec[], int len){
  if(len == 2){
    if(vec[0] == vec[1]) return 0;
    else return 1;
  }

  int aux = (vec[0] > vec[1])? 1 : 0; //pico: 0, vale: 1 (vec[1])

  for (int i = 2; i < len; i++){
    if(vec[i] > vec[i-1]){
      if(aux == 1) aux = 0;
      else return 0;
    }else if(vec[i] < vec[i-1]){
      if(aux == 0) aux = 1;
      else return 0;
    }else{ // vec[i] == vec[i-1]
      return 0;
    }
  }
  
  return 1;
}

int main(int argc, char const *argv[]){
  int n, h[MAX];

  cin >> n;
  for (int i = 0; i < n; i++){
    cin >> h[i];
  }

  cout <<  isStandard(h, n) << endl;
    
  return 0;
}