#include<iostream>
using namespace std;
int main(){
    int i =5;
    auto f = [&i]()->bool {if(i>0) return true;--i; return false; };
    while (!f())
    {
        cout <<i << endl;
    }
    
}