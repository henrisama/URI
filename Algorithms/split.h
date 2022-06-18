#include <cstring>
#include <string>
#include <vector>

std::vector<std::string> split(char* value, const char* delim){
  std::vector<std::string> tokens;
  char* token = strtok(value, delim);

  while(token != NULL){
    tokens.push_back(std::string(token));
    token = strtok(NULL, delim);
  }
  
  return tokens;
}