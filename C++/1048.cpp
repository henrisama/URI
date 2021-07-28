#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  double salary;

  cin >> salary;

  if(salary > 0){
    if(salary <= 400.0){
      printf("Novo salario: %.2lf\n", ((salary*0.15)+salary));
      printf("Reajuste ganho: %.2lf\n", (salary*0.15));
      cout << "Em percentual: 15 %" << endl;
    }else if(salary <= 800.0){
      printf("Novo salario: %.2lf\n", ((salary*0.12)+salary));
      printf("Reajuste ganho: %.2lf\n", (salary*0.12));
      cout << "Em percentual: 12 %" << endl;
    }else if(salary <= 1200.0){
      printf("Novo salario: %.2lf\n", ((salary*0.10)+salary));
      printf("Reajuste ganho: %.2lf\n", (salary*0.10));
      cout << "Em percentual: 10 %" << endl;
    }else if(salary <= 2000.0){
      printf("Novo salario: %.2lf\n", ((salary*0.07)+salary));
      printf("Reajuste ganho: %.2lf\n", (salary*0.07));
      cout << "Em percentual: 7 %" << endl;
    }else{
      printf("Novo salario: %.2lf\n", ((salary*0.04)+salary));
      printf("Reajuste ganho: %.2lf\n", (salary*0.04));
      cout << "Em percentual: 4 %" << endl;
    }
  }
  return 0;
}