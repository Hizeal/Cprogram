#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
bool  predicates(const string& s){
    return s.size()>=5;
}
int main(){
    auto v = vector<string> { "a", "as", "aasss", "aaaaassaa", "aaaaaabba", "aaa" };
    auto new_pos = partition(v.begin(),v.end(),predicates);
    for(auto it = v.cbegin(); it !=new_pos;++it){
        cout << *it <<endl;
    }
    return 0;
}