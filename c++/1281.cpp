#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;

typedef struct list_kg{
    char str[50];
    float value;
}_list;


int main(){
    char str[50];
    int n, m, p, qt;
    float sum;
    cin >> n;

    while(n > 0){
        cin >> m;
        sum = 0;
        _list *aux = (_list*) malloc(sizeof(_list) * m);

        for (int i = 0; i < m; i++)
            cin >> aux[i].str >> aux[i].value;
    
        cin >> p;
        for (int j = 0; j < p; j++){
            cin >> str >> qt;
            for (int k = 0; k < m; k++){
                if(strcmp(aux[k].str, str) == 0) sum += (aux[k].value * qt);
            }
        }
        printf("R$ %.2f\n", sum);
        free(aux);
        n--;
    }
    return 0;
}