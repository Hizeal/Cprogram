#include<iostream>
using std::cin;
using std::cout;
void exchange(int & a,int& b){
    int tmp = a;
    a = b;
    b = tmp;
}
int main(){
    int a,b;
    cin >> a>>b;
    exchange(a,b);
    cout << a<<" "<<b;
    return 0;
}