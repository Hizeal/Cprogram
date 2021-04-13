#include<iostream>
using namespace std;
int swap(int i,const int* p){
    return i > *p ? i :*p;
}
int main(){
    int i = 12;
    cout << swap(2,&i) << endl;
    return 0;
}