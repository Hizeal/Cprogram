#include<iostream>
#include<string>
using std::cout;
using std::endl;
using std::string;
void replace(string& s,const string& oldVal,const string& Newval){
    auto curr = s.begin();
    while(curr != s.end() - oldVal.size()){
        if(oldVal == string(curr,curr+oldVal.size())){
            curr = s.erase(curr,curr+oldVal.size());
            curr = s.insert(curr,Newval.begin(),Newval.end());
            curr += oldVal.size();
        }else{
            curr++;
        }
    }
}
int main(){
    string s("To drive straight thru is a foolish, tho courageous act.");
	replace(s,"tho","though");
	replace(s, "thru", "through");

	cout << s;
}