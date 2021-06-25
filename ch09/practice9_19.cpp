#include<iostream>
#include<list>
#include<string>
using std::cin;using std::cout;using std::endl;using std::string; using std::list;
int main(){
    list<string> Q;
    string str;
    while (cin >> str)
    {
        Q.push_back(str);
    }
    for(auto i = Q.cbegin();i != Q.cend();i++){
        cout << *i << endl;
    }
    
}