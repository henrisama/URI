#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num, positivo, negativo, impar, par;
    par = impar = negativo = positivo = 0;

    for (int i = 0; i < 5; i++){
        cin >> num;
        if(num > 0){positivo++;}
        else if(num < 0){negativo++;}

        if(num%2 == 0){par++;}
        else{impar++;}
    }

    cout << par << " valor(es) par(es)" << endl;
    cout << impar << " valor(es) impar(es)" << endl;
    cout << positivo << " valor(es) positivo(s)" << endl;
    cout << negativo << " valor(es) negativo(s)" << endl;

    return 0;
}
