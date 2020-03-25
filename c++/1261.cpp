#include <iostream>
#include <string>

using namespace std;

typedef struct hay_dict{
    string str;
    int value;
}hay;

int main(void){
    string str;
    int m, n, sum;
    cin >> m >> n;

    hay aux[1000];

    for (int i = 0; i < m; i++)
        cin >> aux[i].str >> aux[i].value;
    
    while(n > 0){
        sum = 0;
        while(cin >> str){
            if(str.compare(".") == 0) break;
            for (int j = 0; j < m; j++)
                if(aux[j].str.compare(str) == 0) sum += aux[j].value;
        }
        cout << sum << endl;
        --n;
    }
    return 0;
}