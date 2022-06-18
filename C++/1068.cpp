#include <iostream>
#include <cstring>
#include <string>
#include <stack>

using namespace std;

int main(int argc, char const *argv[]){
  string str;
  stack<char> judge;

  while(getline(cin, str)){
    while(judge.size() != 0){
      judge.pop();
    }

    for (int i = 0; i < str.size(); i++){
      if(str[i] == '('){
        judge.push('(');
      }else if(str[i] == ')'){
        if(judge.size() == 0){
          judge.push('x');
          break;
        }
        judge.pop();
      }
    }
    
    if(judge.size() != 0){
       cout << "incorrect" << endl;
    }else{
      cout << "correct" << endl;
    }
  }

  return 0;
}