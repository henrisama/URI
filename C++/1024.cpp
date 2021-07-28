#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string cryptography(string text){
  //case 1
    for (int i = 0; i < text.size(); i++){
      if((text[i] >= 'a' && text[i] <= 'z') 
          || (text[i] >= 'A' && text[i] <= 'Z')){
            text[i] += 3;
      }
    }
    
  //case 2
    reverse(text.begin(), text.end());

  //case 3
    for (int j = (text.size()/2); j < text.size(); j++){
      text[j] -= 1;
    }
    
  return text;
}

int main(int argc, char const *argv[]){
  int n;
  string text;
  
  scanf("%d%*c", &n);
  while(n--){
    getline(cin, text);
    cout << cryptography(text) << endl;
  }
  return 0;
}