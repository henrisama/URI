#include <iostream>
#include <string>
using namespace std;

int alliteration(string str){
    int aux1, aux2, aux3, sum;
    aux1 = aux2 = aux3 = sum = 0;
    int lgth = str.length();
    //to lower case
    for (int i = 0; i < lgth; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str.at(i) += 32;
        }
    }
    aux2 = str.at(0);
    for (int j = 1; j < lgth; j++){
        if(str.at(j-1) == ' '){
            if(str.at(j) == aux2 && str.at(j) != aux3) sum += 1;
            aux3 = aux2;
            aux2 = str.at(j);
        }
    }

    return sum;
}

int main(void){
    string str;
    while(getline(cin, str)){
        cout << alliteration(str) << endl;
    }
    return 0;
}