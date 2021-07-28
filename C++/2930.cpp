#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  int e, d;

  cin >> e >> d;

  if(d-e < 0){
    cout << "Eu odeio a professora!" << endl;
  }else if(d-e > 2){
    cout << "Muito bem! Apresenta antes do Natal!" << endl;
  }else{
    cout << "Parece o trabalho do meu filho!" << endl;
    e += 2;
    if(e < 24){
      cout << "TCC Apresentado!" << endl;
    }else{
      cout << "Fail! Entao eh nataaaaal!" << endl;
    }
  }
  return 0;
}