#include <stdio.h>

int main(){
    int n, sum, p;
    while(scanf("%d", &n) != EOF){
        sum = 1; p = 2;
        while(p!=1){
            if(p <= n/2) p += p;
            else p -= (n - p  + 1);
            sum++;
        }
        printf("%d\n", sum);
    }
    return 0;
}