#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  int n, c, e, strgC, strgE;
  char sd[6], sn[6];

  cin >> n;
  c = e = 0;
  strgC = 0; //qtd guarda-chuvas em casa
  strgE = 0; //qtd guarda-chuvas no escritorio

  while(n--){
    scanf("%s %s", &sd, &sn);

    if(sd[0] == 'c'){  
      strgE++;  
      if(strgC == 0){
        c++;
      }else{
        strgC--;
      }
    }
    
    if(sn[0] == 'c'){
      strgC++;
      if(strgE == 0){
        e++;
      }else{
        strgE--;
      }
    }
  }

  cout << c << " " << e << endl;
  return 0;
}