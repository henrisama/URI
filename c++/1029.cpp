#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int calls(int n){
    int result, tempA, tempB, aux;
    result = 1;
    tempA = 2;
    tempB = 0;
    for (int i = 1; i < n; i++){
        aux = tempA;

        result = (result+tempA);
        tempA += tempB;
        tempB = aux;
    }
    return result - 1;
}

unsigned long long int binet(int n){
    return (1/sqrt(5)) * (pow((1 + sqrt(5))/2, n) - (pow((1 - sqrt(5))/2, n)));
}

int main(void){
    int n, cases;
    cin >> cases;
    while(cases != 0){
        cin >> n;
        printf("fib(%d) = %d calls = %llu\n", n, calls(n), binet(n));
        cases--;
    }
    return 0;
}
