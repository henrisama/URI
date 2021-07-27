#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){
  string in;
  bool copy = false;

  while(getline(cin, in)){
    //cout << (in.find("<body>") != in.npos) << endl;
    if(in.find("</body>") != in.npos){
      copy = false;
    }
    if(copy){
      cout << in << endl;
    }
    if(in.find("<body>") != in.npos){
      copy = true;
    }
  }
  return 0;
}