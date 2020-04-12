#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>

using namespace std;

const vector<string> explode(const string& str){
	string buff{""};
	vector<string> result;
    vector<string>::iterator it;
	
	for(auto i:str){
		if(i != ' ') buff+=i; 
        else if(i == ' ' && buff != ""){
            if(result.empty()){
                result.push_back(buff); buff = ""; 
            }else{
                for (it = result.begin(); it != result.end() && (*it).length() >= buff.length(); it++) ;
                result.insert(it, buff);
                buff = "";
            }
        }
	}

	if(buff != ""){
        for (it = result.begin(); it != result.end() && (*it).length() >= buff.length(); it++) ;
        result.insert(it, buff);
    }
	
	return result;
}

int main(void){
    string str;
    int n;
    vector<string> vec;

    scanf("%d%*c", &n);

    while(n > 0){
        getline(cin, str);
        vec = explode(str);
        for(int i = 0; i < vec.size(); i++){
            if(i+1 == vec.size()){
                cout << vec.at(i) << endl;
            }else{
                cout << vec.at(i) << " ";
            }
        }
        --n;
    }
    return 0;
}