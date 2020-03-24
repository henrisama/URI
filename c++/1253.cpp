#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main(void){
    int n, caesar;
    string str;
    scanf("%d%*c", &n);
    while(n != 0){
        getline(cin, str);
        scanf("%d%*c", &caesar);
        for (int i = 0; i < str.length(); i++){
            str[i] -= caesar;
            if(str[i] < 'A'){
                str[i] = 91 - (65 - str[i]);
            }
        }
        cout << str << endl;
        n--;
    }
    return 0;
}
