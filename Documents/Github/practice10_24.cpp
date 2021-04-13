#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<functional>
using std::vector;
using std::string;
using namespace std::placeholders;
using std::cout;
bool check_size(const string& s,size_t i){
    return i>s.size();
}
int main(){
    vector<int> v = { 1, 2, 3, 4, 5, 6, 7 };
	string s("12345");
    auto f = find_if(v.begin(),v.end(),bind(check_size,_1,s)); //传递给check_size的参数是i
    if(f != v.end()){
        cout << *f;
    }
}