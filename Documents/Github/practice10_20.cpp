#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
size_t size6(const vector<string>& str){
    return count_if(str.begin(),str.end(),[](const string& s){return s.size()>6;});
}
int main(){
    vector<string> v{ "1234", "123456", "1234567", "1234567", "1234567", "1234567" };
    cout << size6(v)<<endl;
    return 0;
}