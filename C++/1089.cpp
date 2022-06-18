#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  int last_nums[2];
  int n, num, sum;
  int first, second;

  while(scanf("%d", &n) == 1 && n > 0){
    sum = 0;

    scanf("%d", &last_nums[0]);
    scanf("%d", &last_nums[1]);

    if(n == 2 && last_nums[0] != last_nums[1]){
      sum = 2;
    }else{
      first = last_nums[0];
      second = last_nums[1];

      for (int i = 2; i < n; i++){
        scanf("%d", &num);

        if((last_nums[1] > last_nums[0] && last_nums[1] > num)
        || (last_nums[1] < last_nums[0] && last_nums[1] < num)){
          sum++;
        }
        last_nums[0] = last_nums[1];
        last_nums[1] = num;
      }

      if((first > second && first > num)
      || (first < second && first < num)){
        sum++;
      }

      if((num > last_nums[0] && num > first)
      || (num < last_nums[0] && num < first)){
        sum++;
      }
    }

    cout << sum << endl;
  }

  return 0;
}