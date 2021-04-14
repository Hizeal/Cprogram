#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
void elimDups(vector<string>& s){
    sort(s.begin(),s.end());
    auto new_pos = unique(s.begin(),s.end());
    s.erase(new_pos,s.end());
}
void bigger(vector<string>& words,vector<string>::size_type sz){ //保存任意string对象或vector对象的长度
    elimDups(words);
    stable_sort(words.begin(),words.end(),
                                    [](const string& a,const string& b){return a.size()>b.size();});//进行string长度排序

    auto wc = find_if(words.begin(),words.end(),[sz](const string& a) {return a.size()>= sz;});
    for_each(wc,words.end(),[](const string& s){cout << s<<" ";});//打印长度大于等于给定值的单词

}
int main(){
    vector<string> v{
	"1234", "1234", "1234", "hi~", "alan", "alan", "cp"
    };
    bigger(v,3);
    cout << endl;
}