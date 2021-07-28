#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){
  
  string x1, x2, x3;

  cin >> x1 >> x2 >> x3;

  if(x1[0] == 'v'){
    if(x2[0] == 'a'){
      if(x3[0] == 'c'){
        cout << "aguia" << endl;
      }else{
        cout << "pomba" << endl;
      }
    }else{
      if(x3[0] == 'o'){
        cout << "homem" << endl;
      }else{
        cout << "vaca" << endl;
      }
    }
  }else{
    if(x2[0] == 'i'){
      if(x3[2] == 'm'){
        cout << "pulga" << endl;
      }else{
        cout << "lagarta" << endl;
      }
    }else{
      if(x3[0] == 'h'){
        cout << "sanguessuga" << endl;
      }else{
        cout << "minhoca" << endl;
      }
    }
  }

  return 0;
}