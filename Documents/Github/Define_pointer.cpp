#include<iostream>
using namespace std;
int main(){
    int a =10;
    int* p; //指针定义
    p = &a;//指针p的赋值，p指向a的内存
    cout <<p<<endl; //指针p存放的内容，即a的地址
    cout << &a << endl;//同上
    cout << *p << endl;//解应用，找到指针指向的内存，取出该块内存中的值
    cout << &p << endl; //指针p的地址
    a = 12;
    cout << *p;
}