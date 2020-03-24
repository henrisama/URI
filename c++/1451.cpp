#include <iostream>
#include <string>
#include <list>

using namespace std;

int main(){
    string str;
    list<char> result;
    list<char>::iterator it;
    int aux; //0 end, 1 begin 
    while(getline(cin, str)){
        aux = 0;
        for (int i = 0; i < str.length(); i++){
            if(str[i] == '['){ aux = 1; it = result.begin(); }
            else if(str[i] == ']'){ aux = 0; }
            else{
                if(aux == 0){ result.push_back(str[i]); }
                else{ result.insert(it, str[i]);}
            }
        }
        for(it = result.begin(); it != result.end(); it++){ cout << *it; }
        cout << endl;
        result.clear();
    }
    return 0;
}
