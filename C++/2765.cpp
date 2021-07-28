#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){
  string text;
  getline(cin, text);

  for (int i = 0; i < text.size(); i++){
    if(text[i] == ','){
      cout << endl;
    }else{
      cout << text[i];
    }
  }

  cout << endl;
  
  return 0;
}