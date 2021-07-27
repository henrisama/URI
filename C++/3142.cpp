#include <iostream>
#include <string>


using namespace std;

int main(int argc, char const *argv[]){
  string num;
  int i, len, sum, aux;

  while(getline(cin, num)){
    if(num.size() >= 4){
      cout << "Essa coluna nao existe Tobias!" << endl;
    }else{
      sum = 0;
      len = num.size() - 1;
      for (i = 0; i < len; i++){
        aux = (num[i]-64);
        sum += (aux*26);
        if(i+1<len){
          sum *= 26;
        }
      }

      sum += (num[i]-64);
      if(sum > 16384){
        cout << "Essa coluna nao existe Tobias!" << endl;
      }else{
        cout << sum << endl;
      }
    }
  }
  return 0;
}