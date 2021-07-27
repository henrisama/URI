#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  int num;
  bool pass = false;
  while(!pass && cin>>num){
    if(num == 2002){
      cout << "Acesso Permitido" << endl;
      pass = true;
    }else{
      cout << "Senha Invalida" << endl;
    }
  };

  return 0;
}