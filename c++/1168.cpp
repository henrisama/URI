#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main(void){
    int n, sum;
    string leds;
    scanf("%d%*c", &n);
    while(n != 0){
        sum = 0;
        getline(cin, leds);
        for (int j = 0; j < leds.length(); j++){
            switch (leds[j]){
                case '1':
                    sum += 2;
                    break;
                case '2':
                    sum += 5;
                    break;
                case '3':
                    sum += 5;
                    break;
                case '4':
                    sum += 4;
                    break;
                case '5':
                    sum += 5;
                    break;
                case '6':
                    sum += 6;
                    break;
                case '7':
                    sum += 3;
                    break;
                case '8':
                    sum += 7;
                    break;
                case '9':
                    sum += 6;
                    break;
                case '0':
                    sum += 6;
                    break;
            }
        }
        cout << sum << " leds" << endl;
        n--;
    }
    return 0;
}
