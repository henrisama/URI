#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  int B, G;

  cin >> B >> G;

  if(G/2 == B || G/2 < B){
    cout << "Amelia tem todas bolinhas!" << endl;
  }else{
    printf("Faltam %d bolinha(s)\n", ((int)(G/2)) - B);
  }
  return 0;
}