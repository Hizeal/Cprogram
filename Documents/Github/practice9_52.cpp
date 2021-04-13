#include<iostream>
#include<string>
#include<stack>
#include<cctype>
using namespace std;
string calcul(string & l,string& r,string& op){
    string s;
    if(op == "-"){
        s = to_string(stoi(l) - stoi(l));
    }
    return s;
}
int main(){
    stack<string> stack;
    string s("1+2*(7-4)");
    for(auto iter = s.begin();iter != s.end();){
        if(*iter == '('){
            stack.push(string(1,*iter));
            ++iter;
            while (*iter != ')')
            {
                stack.push(string(1,*iter));
                ++iter;
            }
            
        }else if(*iter == ')'){
            string r = stack.top();
            stack.pop();
            string op = stack.top();
            stack.pop();
            string l = stack.top();
            stack.pop();
            stack.pop();
            stack.push(calcul(l,r,op));
            ++iter;
        }else{
            ++iter;
        }
    }
    while (!stack.empty())
    {
        cout << stack.top() << endl;
        stack.pop();
    }

}