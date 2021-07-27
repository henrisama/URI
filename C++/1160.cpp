#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  int n, PA, PB, _PA, _PB, sum;
  double G1, G2;

  cin >> n;

  while(n--){
    cin >> PA >> PB >> G1 >> G2;
    _PA = PA; _PB = PB;
    sum = 0;
    while((_PA <= _PB) && sum <= 100){
      _PA = (int)(_PA*(G1/100)+_PA);
      _PB = (int)(_PB*(G2/100)+_PB);
      sum++;
    }
    if(sum > 100){
      cout << "Mais de 1 seculo." << endl;
    }else{
      cout << sum << " anos." << endl;
    }
  }

  return 0;
}