#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){
  int H, E, A, O, W, X;

  cin >> H >> E >> A >> O >> W >> X;

  if((H+E+A) > (O+W)){
    cout << "Middle-earth is safe." << endl;
  }else{
    if((H+E+A+X) > (O+W)){
      cout << "Middle-earth is safe." << endl;
    }else{
      cout << "Sauron has returned." << endl;
    }
  }
  return 0;
}