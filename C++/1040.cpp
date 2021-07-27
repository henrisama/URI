#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  float n1, n2, n3, n4;
  float media;

  cin >> n1 >> n2 >> n3 >> n4;

  media = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;

  printf("Media: %.1f\n", media);
  if(media >= 7){
    cout << "Aluno aprovado." << endl;
  }else if(media < 5){
    cout << "Aluno reprovado." << endl;
  }else{
    float n5, mediaFinal;
    cout << "Aluno em exame." << endl;
    cin >> n5;
    printf("Nota do exame: %.1f\n", n5);
    mediaFinal = (media+n5)/2;
    if(mediaFinal >= 5){
      cout << "Aluno aprovado." << endl;
    }else{
      cout << "Aluno reprovado." << endl;
    }
    printf("Media final: %.1f\n", mediaFinal);
  }
  return 0;
}