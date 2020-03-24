#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main(void){
    int n, cases, sum;
    string str;
    scanf("%d", &n);
    sum = 0;
    while(n != 0){
        scanf("%d%*c", &cases);
        for (int i = 0; i < cases; i++){
            getline(cin, str);
            for(int j = 0; j < str.length(); j++){
                sum += (str[j] - 65) + i + j;
            }
        }
        cout << sum << endl;
        sum = 0;
        n--;
    }
    return 0;
}