#include <iostream>

using namespace std;

int calls;

int fib(int num){
  calls++;
  if(num == 1 || num == 0)
    return num;
  
  return fib(num-1) + fib(num-2);
}

int main(int argc, char const *argv[]){
  int n, num, result;

  cin >> n;
  while (n--){
    cin >> num;
    calls = -1;
    result = fib(num);
    printf("fib(%d) = %d calls = %d\n", num, calls, result);
  }
  
  return 0;
}