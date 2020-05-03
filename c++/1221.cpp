#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(unsigned long n){
    if(n == 1) return false;
    if(n == 2) return true;
    if(n%2 == 0) return false;

    long max = (long) (sqrt(n) + 1);
    for (int i = 3; i < max; i++){
        if(n%i == 0) return false;
    }
    return true;
}

int main(){
    int n;
    unsigned long num;

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> num;
        if(isPrime(num)) cout << "Prime" << endl;
        else cout << "Not Prime" << endl;
    }
    
    return 0;
}