#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<numeric>
#include<list>
using namespace std;
bool is_shorter(const string& str1,const string& str2){
    return str1.size() < str2.size();
}
void elimDups(vector<string>& str){
    sort(str.begin(),str.end());
    auto new_unique = unique(str.begin(),str.end());
    str.erase(new_unique,str.end());
}
int main(){
    vector<string> str={"1234", "1234", "1234", "Hi", "alan", "wang"};
    elimDups(str);
    stable_sort(str.begin(),str.end(),is_shorter);
    for(auto &i :str){
        cout << i <<" ";
    }

}
