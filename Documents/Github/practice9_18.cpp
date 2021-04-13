#include<iostream>
#include<deque>
#include<string>
using std::cin;using std::cout;using std::endl;using std::string; using std::deque;
int main(){
    deque<string> Q;
    string str;
    while (cin >> str)
    {
        Q.push_back(str);
    }
    for(auto i = Q.cbegin();i != Q.cend();i++){
        cout << *i << endl;
    }
    
}