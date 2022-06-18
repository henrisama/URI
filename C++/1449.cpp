#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <map>

using namespace std;

std::vector<std::string> split(char* value, const char* delim){
  std::vector<std::string> tokens;
  char* token = strtok(value, delim);

  while(token != NULL){
    tokens.push_back(std::string(token));
    token = strtok(NULL, delim);
  }
  
  return tokens;
}

int main(int argc, char const *argv[]){
  int instance, M, N;
  string value, key, lyric;
  vector<string> tokens;
  map<string, string> translate;
  map<string,string>::iterator translate_it;

  scanf("%d", &instance);

  while(instance > 0){
    scanf("%d %d%*c", &M, &N);

    while(M > 0){
      getline(cin, key);
      getline(cin, value);

      translate.insert(pair<string, string>(key, value));
      --M;
    }

    while(N > 0){
      getline(cin, lyric);
      tokens = split((char*)lyric.c_str(), (char*)" ");

      for (vector<string>::iterator it = tokens.begin(); it != tokens.end(); it++){
        translate_it = translate.find(*it);
        if(translate_it != translate.end()){
          cout << translate_it->second;
        }else{
          cout << *it;
        }

        if(next(it) != tokens.end()){
          cout << " ";
        }
      }

      cout << endl;
      --N;
    }

    cout << endl;
    tokens.clear();
    translate.clear();
    --instance;
  }
  
  return 0;
}