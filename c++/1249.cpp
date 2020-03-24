#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main(void){
    string str;

    while(getline(cin, str)){
        for (int i = 0; i < str.length(); i++){
            if(str[i] >= 'A' && str[i] <= 'Z'){
                str[i] += 13;
                if(str[i] > 'Z') 
                    str[i] = (str[i] - 90) + 64;
            }
            else if(str[i] >= 'a' && str[i] <= 'z'){
                if((str[i]+13) > 'z') 
                    str[i] = ((str[i] + 13) - 122) + 96;
                else
                    str[i] += 13;
            }       
        }
        cout << str << endl;
    }
    return 0;
}
