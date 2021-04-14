#include<iostream>
using namespace std;
int main(){
    int a=4,b=8;
    auto sum = [a](const int& b){return a+b;}; //捕捉所在函数中的int
    cout << sum(b);
}