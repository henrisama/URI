#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){
  int t, n, mg;
  string item;


  while(cin >> t && t > 0){
    mg = 0;
    while(t--){
      scanf("%d%*c", &n);
      getline(cin, item);

      if(item[0] == 's') mg += (n*120); //Orange juice
      else if(item[0] == 'g') mg += (n*70); //Red guava
      else if(item[0] == 'l') mg += (n*50); //Orange
      else if(item[0] == 'b') mg += (n*34); //Broccoli
      else if(item[0] == 'm'){
        if(item[2] == 'r') mg += (n*85);
        else if(item[2] == 'm') mg += (n*85);
        else mg += (n*56);
      }
    }
    if(mg > 130){
      cout << "Menos " << (mg-130) << " mg" << endl;
    }else if(mg < 110){
      cout << "Mais " << (110 - mg) << " mg" << endl;
    }else{
      cout << mg << " mg" << endl;
    }
  }

  return 0;
}