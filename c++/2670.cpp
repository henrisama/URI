#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b , c, soma = 0;
    cin >> a >> b >> c;

    soma = b * 2 + c * 4;
    if(a * 2 + c * 2 < soma){
        soma = a * 2 + c * 2;
    }else if(a * 4 + b * 2 < soma){
        soma = a * 4 + b * 2;
    }

    cout << soma << endl;
    return 0;
}
