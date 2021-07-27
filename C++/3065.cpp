#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int charToInt(char *vec){
  int sum;
  sum = (vec[0] - 48);

  if(vec[1] >= '0' && vec[1] <= '9'){
    sum *= 10;
    sum += (vec[1] - 48);

    if(vec[2] >= '0' && vec[2] <= '9'){
      sum *= 10;
      sum += (vec[2] - 48);
    }
  }
  return sum;
}

int main(int argc, char const *argv[]){
  int n, i, result, cont, len;
  string expr;

  cont = 0;

  while(scanf("%d%*c", &n) && n != 0){
    cont++; i = 0;
    getline(cin, expr);
    result = 0 + expr[i] - 48; i++;

    if(expr[i] >= '0' && expr[i] <= '9'){
      result *= 10;
      result += (expr[i] - 48);
      i++;
      if(expr[i] >= '0' && expr[i] <= '9'){
        result *= 10;
        result += (expr[i] - 48);
        i++;
      }
    }

    len = strlen(expr.c_str());

    for (i; i < len; i+=2){
      switch (expr[i]){
        case '-':
          result -= charToInt(&expr[i+1]);
          break;
        case '+':
          result += charToInt(&expr[i+1]);
          break;
        default:
          break;
      }
      
      if(expr[i+2] >= '0' && expr[i+2] <= '9'){
        i++;
        if(expr[i+2] >= '0' && expr[i+2] <= '9'){
          i++;
        }
      }
    }

    cout << "Teste " << cont << endl;
    cout << result << endl << endl;
    
  }
  return 0;
}