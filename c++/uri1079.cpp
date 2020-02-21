#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int i;
    float a, b, c;
    cout.precision(2);
    cin >> i;
    while(i > 0){
        cin >> a >> b >> c;
        printf("%.1f\n", ((a*2) + (b*3) + (c*5))/10);
        --i;
    }
    return 0;
}
