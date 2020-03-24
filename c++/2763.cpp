#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string cpf;
    cin >> cpf;
    for (int i = 0; i < cpf.length(); i++){
        if(cpf[i] == '.' || cpf[i] == '-'){
            cout << '\n';
            i++;
        }
        cout << cpf[i];
    }
    cout << '\n';
    return 0;
}
