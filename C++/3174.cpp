#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){
  int n, hours, sum, groupHours[4] = {0};
  string name, group;

  scanf("%d%*c", &n);
  while(n--){
    cin >> name >> group >> hours;
    
    switch (group[0]){
      case 'b':
        groupHours[0] += hours; //bonecos
        break;
      case 'a':
        groupHours[1] += hours;  //arquitetos
        break;
      case 'm':
        groupHours[2] += hours; //musicos
        break;
      case 'd':
        groupHours[3] += hours; //desenhistas
        break;
      default:
        break;
    }
  }
  
  sum = 0;
  sum += groupHours[0]/8;
  sum += groupHours[1]/4;
  sum += groupHours[2]/6;
  sum += groupHours[3]/12;

  cout << sum << endl;
  return 0;
}