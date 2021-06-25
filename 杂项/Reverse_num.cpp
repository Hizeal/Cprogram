#include<iostream>
using std::cout;
using std::cin;
int main(){
    int a;
    cin >> a;
    cout << a%10 << a/10%10 << a/100;
    return 0;
}