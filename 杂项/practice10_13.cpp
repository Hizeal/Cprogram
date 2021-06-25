#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
bool predicate(const string& str){
    return str.size()>=5;
}
int main(){
    auto v = vector<string> { "a", "as", "aasss", "aaaaassaa", "aaaaaabba", "aaa" };
    auto pivot = partition(v.begin(),v.end(),predicate);
    for(auto i=v.begin();i != pivot;i++){
        cout << *i << " ";
    }
}