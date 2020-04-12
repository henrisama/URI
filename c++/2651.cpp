#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    getline(cin, str);

    int lng = str.length();
    for (int i = 0; i < lng; i++)
        if(str.at(i) >= 'A' && str.at(i) <= 'Z') str.at(i) += 32;
    
    size_t found = str.find("zelda");
    if(found == 4294967295) cout << "Link Tranquilo" << endl;
    else cout << "Link Bolado" << endl;
    return 0;
}