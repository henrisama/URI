#include <iostream>

using namespace std;

int gcd(int a, int b){
    int aux;
    if(a < b){aux = a; a = b; b = aux;}

    do{
        aux = a%b;
        a = b;
        b = aux;
    }while(aux != 0);

    return a;
}

int main(){
    int n, f1, f2;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> f1 >> f2;
        cout << gcd(f1, f2) << endl;
    }
    return 0;
}