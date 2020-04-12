#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main(){
    string str, aux;
    int n, k;
    bool lng;
    cin >> n;
    while (n > 0){
        lng = false;
        scanf("%d%*c", &k);
        for (int i = 0; i < k; i++){
            getline(cin, str);
            if(i == 0) aux = str;
            else{ if(str.compare(aux) != 0){ lng = true; } }
        }
        if(lng) cout << "ingles" << endl;
        else cout << str << endl;
        --n;
    }
    
    return 0;
}