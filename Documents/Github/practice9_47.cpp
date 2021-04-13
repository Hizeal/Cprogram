#include<iostream>
#include<string>
using std::cout;
using std::endl;
using std::string;
int main(){
	string numbers("0123456789");
	string s("ab2c3d7R4E6");  
    string::size_type pos = 0;
    for(pos = 0;(pos = s.find_first_of(numbers,pos)) != string::npos;pos++){
        cout << s[pos] << " ";
    }
    for(pos = 0 ; (pos = s.find_first_not_of(numbers,pos)) != string::npos;pos++){
        cout << s[pos] << " ";
    }  
}
