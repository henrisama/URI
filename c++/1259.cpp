#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void){
    int count, num, size;
    vector<int> even, odd;

    cin >> count;
    for (int i = 0; i < count; i++){
        cin >> num;
        if(num%2 == 0) even.push_back(num);
        else odd.push_back(num);
    }
    
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    size = even.size();
    for (int j = 0; j < size; j++){
        cout << even.at(j) << endl;
    }
    
    size = odd.size();
    for (int k = size - 1; k >= 0; k--){
        cout << odd.at(k) << endl;
    }

    return 0;
}