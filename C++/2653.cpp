#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    set<string> jewelry;
    string value;

    while(cin >> value){
      jewelry.insert(value);
    }

    cout << jewelry.size() << endl;

    return 0;
}
