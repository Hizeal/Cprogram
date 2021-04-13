#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<string> str = {"a","v","s","a","h"};
    sort(str.begin(),str.end());
    auto end_unique = unique(str.begin(),str.end());
    str.erase(end_unique,str.end());
    for(auto i:str){
        cout << i;
    }
}