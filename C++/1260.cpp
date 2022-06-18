#include <iostream>
#include <string>
#include <map>

using namespace std;

bool sort_by_name(const pair<string, int> &a, const pair<string, int> &b){
  return a.first < b.first;
}

int main(int argc, char const *argv[]){
  map<string, int> trees;
  map<string, int>::iterator tree_it;
  string tree;
  int n, sum;
  bool is_init = true;

  scanf("%d%*c%*c", &n);

  while(n > 0){
    if(is_init) is_init = false; else cout << endl;
    trees.clear();
    sum = 0;

    while(getline(cin, tree)){
      if(tree.size() == 0) break;
      trees[tree]++; sum++;
    }
    
    for (tree_it = trees.begin(); tree_it != trees.end(); tree_it++){
      string str = tree_it->first;
      int num = tree_it->second;
      printf("%s %.4lf\n", str.c_str(), (num/(double)sum)*100);
    }

    --n;
  }
  return 0;
}
