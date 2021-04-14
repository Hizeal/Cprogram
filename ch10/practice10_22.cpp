#include<iostream>
#include<functional>
#include<algorithm>
#include<vector>
#include<string>
using namespace std::placeholders;
using std::cout;
using std::vector;
using std::string;
bool check_size(const string& s,string::size_type sz){
    return s.size()>=sz;
}
int main(){
    vector<string> authors{ "1234567", "1234", "1234567890", "1234567", "12345" };
    cout << count_if(authors.begin(),authors.end(),bind(check_size,_1,6));
}