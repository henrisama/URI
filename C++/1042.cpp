#include <iostream>
#include <list>

using namespace std;

int main(int argc, char const *argv[]){
  list<int> _list;
  int a, b, c;

  cin >> a >> b >> c;

  _list.push_back(a);
  _list.push_back(b);
  _list.push_back(c);

  _list.sort();

  for (auto const &i: _list){
    cout << i << endl;
  }
  
  cout << endl << a << endl << b << endl << c << endl;

  return 0;
}