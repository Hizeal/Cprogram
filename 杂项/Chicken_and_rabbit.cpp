#include<iostream>
using std::cin;
using std::cout;
int main(){
    int n,m;
    cin >> n >> m;
    int a,b;
    a = (4*n-m)/2;
    b = n-a;
    if(m %2 == 1 || a<0 || b<0){
        cout<<"no answer";
    }
    else{
        cout << a <<" "<<b;   
    }
    return 0;
}