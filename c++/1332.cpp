#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main(void){
    int n;
    string str;
    scanf("%d%*c", &n);
    while(n != 0){
        getline(cin, str);
        if(str.length() == 3){
            if((str[0] == 'o' && str[1] == 'n') || (str[1] == 'n' && str[2] == 'e') || (str[0] == 'o' && str[2] == 'e'))
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }else{
            cout << 3 << endl;
        }
        n--;
    }
    return 0;
}
