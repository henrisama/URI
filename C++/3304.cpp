#include <iostream>
#include <string>
#include <sstream>
#include <cstring>

using namespace std;

bool isLuckyNumber(long long int num){
  bool isOnly7and4 = true;
  string num_str;
  stringstream ss;
  int len;

  ss << num;
  ss >> num_str;

  len = strlen(num_str.c_str());

  for (int i = 0; i < len; i++){
    if(num_str[i] != '7' && num_str[i] != '4'){
      isOnly7and4 = false;
    }
  }
  
  return isOnly7and4;
}

bool isDividedBy(long long int num){
  bool aux = false;
  int luckyNumbers[] = {
    4,
    7,
    44,
    47,
    74,
    77,
    444,
    447,
    474,
    477,
    744,
    747,
    774,
    777,
    4444,
    4447,
    4474,
    4477,
    4744,
    4747,
    4774,
    4777,
    7444,
    7447,
    7474,
    7477,
    7744,
    7747,
    7774,
    7777,
    44444,
    44447,
    44474,
    44477,
    44744,
    44747,
    44774,
    44777,
    47444,
    47447,
    47474,
    47477,
    47744,
    47747,
    47774,
    47777,
    74444,
    74447,
    74474,
    74477,
    74744,
    74747,
    74774,
    74777,
    77444,
    77447,
    77474,
    77477,
    77744,
    77747,
    77774,
    77777,
    444444,
    444447,
    444474,
    444477,
    444744,
    444747,
    444774,
    444777,
    447444,
    447447,
    447474,
    447477,
    447744,
    447747,
    447774,
    447777,
    474444,
    474447,
    474474,
    474477,
    474744,
    474747,
    474774,
    474777,
    477444,
    477447,
    477474,
    477477,
    477744,
    477747,
    477774,
    477777,
    744444,
    744447,
    744474,
    744477,
    744744,
    744747,
    744774,
    744777,
    747444,
    747447,
    747474,
    747477,
    747744,
    747747,
    747774,
    747777,
    774444,
    774447,
    774474,
    774477,
    774744,
    774747,
    774774,
    774777,
    777444,
    777447,
    777474,
    777477,
    777744,
    777747,
    777774,
    777777
  };

  for (int i = 0; i < 126; i++){
    if(num%luckyNumbers[i] == 0){
      aux = true;
      break;
    }
  }
  return aux;
}

int main(int argc, char const *argv[]){
  long long int num;
  while(cin >> num){
    if(isLuckyNumber(num)){
      cout << "sortudo" << endl;
    }else if(isDividedBy(num)){
      cout << "quase sortudo" << endl;
    }else{
      cout << "azarado" << endl;
    }
  }
  return 0;
}