#include <iostream>
#include <string>
#include <stack>
#include <stdio.h>

using namespace std;

int preced(char aux){
    if(aux == '+' || aux == '-') return 1;
    else if(aux == '*' || aux == '/') return 2;
    else if(aux == '^') return 3;
    else return 0;
}

string infixToPosfix(string str){
    stack<char> aux;
    aux.push('#');
    string posfix = "";
    for(int i = 0; i < str.length(); i++){
        if(isalnum(str[i])) posfix += str[i];
        else if(str[i] == '(' || str[i] == '^') aux.push(str[i]);
        else if(str[i] == ')'){
            while(aux.top() != '#' && aux.top() != '('){
                posfix += aux.top();
                aux.pop();
            }
            aux.pop();
        }
        else{
            if(preced(str[i]) > preced(aux.top())) aux.push(str[i]);
            else{
                while(aux.top() != '#' && preced(str[i]) <= preced(aux.top())){
                    posfix += aux.top();
                    aux.pop();
                }
                aux.push(str[i]);
            }
        }
    }
    while(aux.top() != '#'){
        posfix += aux.top();
        aux.pop();
    }

    return posfix;
}

int main(void){
    int n;
    string str;
    scanf("%d%*c", &n);
    while(n > 0){
        getline(cin, str);
        cout << infixToPosfix(str) << endl;
        --n;
    }
    return 0;
}
