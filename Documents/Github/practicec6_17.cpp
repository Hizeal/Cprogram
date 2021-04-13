#include<iostream>
#include<string>
using namespace std;
bool any_capital(const string& str){
    for(auto c: str){
        if(isupper(c)){
            return true;
        }else{
            return false;
        }
    }
}
void to_lower(string &str){
    for(auto &ch:str){
        ch = tolower(ch);
    }
}
int main(){
    string str("Hello World");
    cout << any_capital(str) << endl;
    to_lower(str);
    cout << str << endl;
    return 0;
}