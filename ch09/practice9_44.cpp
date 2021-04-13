#include<iostream>
#include<string>
using std::cout;
using std::endl;
using std::string;
void replace(string& s,const string& oldVal,const string& newVal){
    for(int pos = 0 ; pos < s.size() - oldVal.size();){
        if(s.substr(pos,oldVal.size()) == oldVal && s[pos] == oldVal[0] ){
            s.replace(pos,oldVal.size(),newVal);
            pos+=oldVal.size();
        }else{
            pos++;
        }
    }
}
int main(){
	string s("To drive straight thru is a foolish, tho courageous act.");
	replace(s, "tho", "though");
	replace(s, "thru", "through");

	cout << s;
}