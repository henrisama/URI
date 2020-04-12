#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;

int m;

bool comp(int a, int b){
    if (b%m == a%m){
        if(abs(a)%2 ==abs(b)%2){
            if (a%2 != 0){ return a > b; }
            else{ return b > a; }
        }
        return abs(a)%2 > abs(b)%2; 
    }
    return a%m < b%m;
}

int main(){
    int n, num;
    vector<int> arr;

    while(cin >> n >> m && (n != 0 && m != 0)){
        cout << n << " " << m << endl;

        for (int i = 0; i < n; i++){
            cin >> num;
            arr.push_back(num);
        }
        
        sort(arr.begin(), arr.end(), comp);

        for (int j = 0; j < n; j++){
            cout << arr[j] << endl;
        }

        arr.clear();
    }

    cout << "0 0" << endl;
    return 0;
}