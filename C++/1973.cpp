#include <iostream>
#define MAX 1000010

using namespace std;

typedef long long int lli;
lli seen[MAX] = {false};
lli stars[MAX];

int main(int argc, char const *argv[]){
  lli n, sheeps, i, aux, sum;
  lli totalSheeps, stolen;
  
  cin >> n;
  totalSheeps = 0;
  aux = n;

  while(n--){
    cin >> sheeps;
    totalSheeps += sheeps;
    stars[aux-n-1] = sheeps;
  }
  n = aux;
  stolen = i = sum = 0;
  
  while(true){
    aux = stars[i];
    if(aux > 0){
      stolen++;
      --stars[i];
      if(!seen[i]){
        seen[i] = true;
        sum++;
      }
    }

    if(aux%2 == 0){
      --i;
      if(i < 0) break;
    }else{
      ++i;
      if(i >= n) break;
    }
  }

  cout << sum << " " << totalSheeps-stolen << endl;
  return 0;
}