#include<iostream>
#include<algorithm>
#include<vector>
#include<functional>
#include<string>
using namespace std;
using namespace std::placeholders;
void elimDups(vector<string>& s){
    sort(s.begin(),s.end());
    auto new_pos = unique(s.begin(),s.end());
    s.erase(new_pos,s.end());
}
bool check_size(const string& s,string::size_type sz){
    return s.size()>=sz;
}
void bigger(vector<string>& words,vector<string>::size_type sz){ //保存任意string对象或vector对象的长度
    elimDups(words);

    auto wc = stable_partition(words.begin(),words.end(),bind(check_size,_1,sz));
    for_each(wc,words.end(),[](const string& s){cout << s<<" ";});//打印长度小于给定值的单词

}
int main(){
    vector<string> v{
	"1234", "1234", "1234", "hi~", "alan", "alan", "cp"
    };
    bigger(v,3);
    cout << endl;
}