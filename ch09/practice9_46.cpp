#include<iostream>
#include<string>
using std::cout;
using std::endl;
using std::string;
string add_name(string& s,const string& pre,const string& su){
    s.insert(s.begin(),pre.begin(),pre.end());
    s.insert(s.end(),su.begin(),su.end());
    return s;
}
int main(){
    string name("Huang");
	cout << add_name(name, "Mr.", " Jr.") << endl;
	return 0;
}