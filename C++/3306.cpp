#include <iostream>
#define MAX 100000

using namespace std;

int mdc(int a, int b){
  int r;
  while (b != 0){
       r = a % b;
       a = b;
       b = r;
  }
   return a;
}

int main(int argc, char const *argv[])
{
  int vec[MAX], n, Q;

  cin >> n >> Q;

  for (int i = 0; i < n; i++){
    cin >> vec[i];
  }

  int A, B, V, type, len, result;
  int k;
  for (int j = 0; j < Q; j++){
    cin >> type;

    if(type == 1){
      cin >> A >> B >> V;
      //code
      for(k = A; k <= B; k++){
        vec[k-1] += V;
      }
    }else{
      cin >> A >> B;
      //code
      len = B - A;
      result = mdc(vec[A-1], vec[A]);

      for(k = 1; k < len; k++){
        result = mdc(result, vec[A+k]);
      }

      cout << result << endl;
    }
  }
  return 0;
}
