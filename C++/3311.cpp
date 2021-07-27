#include <iostream>
#include <list>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){
  list<string> names[26];
  string name;
  int n;

  cin >> n;
  while(n--){
    cin >> name;
    names[(name[0] - 65)].push_back(name);
  }

  for(int i = 0; i < 26; i++){
    list<string>::iterator it = names[i].begin();
    for (it; it != names[i].end(); it++){
      cout << *it << endl;
    }
  }
  
  return 0;
}