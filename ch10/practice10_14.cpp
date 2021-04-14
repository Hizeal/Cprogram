#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a>>b;
    auto acc = [](const int& a,const int& b){return a+b;};
    cout << acc(a,b) <<endl;
}