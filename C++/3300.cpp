#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){
  string num;
  int len;
  bool isMala;

  getline(cin, num);
  len = num.size();
  isMala = false;

  for(int i = 0; i < len; i++){
    if(num[i] == '1'){
      if(num[i+1] == '3'){
        cout << num << " es de Mala Suerte" << endl;
        isMala = true;
        break;
      }
    }
  }

  if(!isMala){
    cout << num << " NO es de Mala Suerte" << endl;
  }
  
  return 0;
}