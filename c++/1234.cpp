#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main(){
    string str;
    int length;
    bool _case;
    while(getline(cin, str)){
        length = str.length();
        _case = false;
        for (int i = 0; i < length; i++){
            if(isalpha(str.at(i))){
                if(_case) str.at(i) = tolower(str.at(i));
                else str.at(i) = toupper(str.at(i));
                _case = !_case;
            }
        }
        cout << str << endl;
    }
    return 0;
}