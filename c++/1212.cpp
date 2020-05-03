#include <cstdio>
#include <cstring>
#include <cstdlib>

int carryOperations(char a[], char b[]){
    int carry, sum, lenA, lenB, aux, x, y;
    carry = sum = 0;

    lenA = strlen(a); lenB = strlen(b);
    while(lenA > 0 || lenB > 0){
        x = y = 0;
        if(lenA > 0){ x = a[lenA - 1] - 48; lenA--; }
        if(lenB > 0){ y = b[lenB - 1] - 48; lenB--; }

        carry = (x + y + carry) / 10;
        if(carry > 0){ sum++; }
    }
    
    return sum;
}

int main(){
    char a[10], b[10], result;

    while(1){
        scanf("%s %s", a, b);
        if(a[0] == '0' && b[0] == '0') break;

        result = carryOperations(a, b);
        if(result > 1){ printf("%d carry operations.\n", result); }
        else if( result == 1){ printf("%d carry operation.\n", result); }
        else { printf("No carry operation.\n"); }
    }
    return 0;
}