#include <iostream>
#include <list>

using namespace std;

int main(void){
    list<int> vec;
    int n;

    while(cin >> n && n){
        for (int i = n; i > 0; i--) vec.push_back(i);
        cout << "Discarded cards:";
        while(vec.size() != 1){
            cout << " " << vec.back();
            if(vec.size() != 2) cout << ",";
            vec.pop_back();
            vec.push_front(vec.back());
            vec.pop_back();
        }
        cout << endl << "Remaining card: " << vec.back() << endl;
        vec.clear();
    }
    return 0;
}
