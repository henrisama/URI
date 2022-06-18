#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  float in;
  scanf("%f", &in);

  if(in >= 0 && in <= 2000.00){
    cout << "Isento" << endl;
  }else if(in <= 3000.00){
    printf("R$ %.2f\n",(in - 2000) * 0.08);
  }else if(in <= 4500.00){
    printf("R$ %.2f\n", ((in - 3000)  * 0.18) + 80);
  }else{
    printf("R$ %.2f\n",((in - 4500) * 0.28) + 350);
  }

  return 0;
}