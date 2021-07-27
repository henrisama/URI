#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
  string word;

  getline(cin, word);

  if(strlen(word.c_str()) >= 10){
    cout << "palavrao" << endl;
  }else{
    cout << "palavrinha" << endl;
  }

  return 0;
}
