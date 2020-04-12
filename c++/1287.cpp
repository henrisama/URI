#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cstring>

using namespace std;

bool overflow(string& str){
    long long int aux = atoll(str.c_str());
    return aux > 2147483647;
}

bool someLetter(string& str){
    int length = str.length();
    for (int i = 0; i < length; i++)
        if(str.at(i) < '0' || str.at(i) > '9')  return true;
    return false;
}

int main(){
    string str;
    while(getline(cin, str)){
        replace(str.begin(), str.end(), 'l', '1');
        replace(str.begin(), str.end(), 'o', '0');
        replace(str.begin(), str.end(), 'O', '0');

        str.erase(remove(str.begin(), str.end(), ','), str.end());
        str.erase(remove(str.begin(), str.end(), ' '), str.end());
        
        
        if(str.empty() || str.length() < 1 || someLetter(str) || overflow(str)) cout << "error" << endl;
        else cout << atoi(str.c_str()) << endl;

    }
    return 0;
}