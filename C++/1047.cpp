#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  int h1, m1, h2, m2, hours, minutes;

  cin >> h1 >> m1 >> h2 >> m2;

  if(h1 == h2){
    if(m1 == m2){
      cout << "O JOGO DUROU " << 24 << " HORA(S) E 0 MINUTO(S)" << endl;
    }else if(m1 < m2){
      cout << "O JOGO DUROU " << 0 << " HORA(S) E " << m2-m1 << " MINUTO(S)" << endl;
    }else{
      cout << "O JOGO DUROU " << 23 << " HORA(S) E " << 60-(m1-m2) << " MINUTO(S)" << endl;
    }
  }else{
    hours = minutes = 0;
    while(h1 != h2){
      while(m1 < 60){
        m1++;
        minutes++;
        if(minutes == 60){
          minutes = 0;
          hours++;
        }
      }

      m1 = 0;
      h1++;
      if(h1 == 24){
        h1 = 0;
      }
    }

    while(m1 != m2){
      m1++;
      minutes++;
      if(minutes == 60){
        minutes = 0;
        hours++;
      }
    }

    cout << "O JOGO DUROU " << hours << " HORA(S) E " << minutes << " MINUTO(S)" << endl;
  }
  return 0;
}