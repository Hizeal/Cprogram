#include<iostream>
using namespace std;
void swap(int *p,int*q){
    int temp = *p;
    *p = *q;
    *q = *temp;
}
int main(){
    int a = 10;
    int b = 12;
    swap(&a,&b);
    cout << a << b<< endl;
}