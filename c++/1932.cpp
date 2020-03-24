#include <iostream>
#include <string.h>

using namespace std;

int vec[200005], stock[200005][2]; //2.10^5

int max(int a, int b){
    return (a > b)? a : b;
}

int maxProfit(int n, int tax){
    stock[n][0] = stock[n][1] = 0;
    int x;

    for(int i = n-1; i >= 0; --i)
        for(int j = 0; j < 2; j++)
            stock[i][j] = max(((j)? vec[i] : -(vec[i] + tax)) + stock[i+1][!j], stock[i+1][j]);

    return stock[0][0];
}

int main(){
    int n, tax;
    while (cin >> n >> tax){
        for(int i = 0; i < n; i++) cin >> vec[i];
        memset(stock, -1, sizeof stock);
        cout << maxProfit(n, tax) << "\n"; 
    }
    return 0;
}
