#include <iostream>
#include <string>

using namespace std;

int main(void){
    string str;
    int sum;
    while(getline(cin,str)){
        sum = 0;
        for (int i = 0; i < str.length(); i++){
            if(str[i] == '('){
                sum++;
            }
            else if(str[i] == ')'){
                if(sum == 0){
                    sum--;
                    break;
                }
                sum--;
            }
        }    
        if(sum == 0)
            cout << "correct" << endl;
        else
            cout << "incorrect" << endl;
    }
    return 0;
}
