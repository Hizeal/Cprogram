#include<iostream>
using namespace std;
void swap(int* &p,int* &q){ //交换两个int指针，形参为指针的引用
    auto tmp = p;
    p=q;
    q=tmp;
}
int main(){
    int a = 10,b=12;
    auto lft = &a;
    auto rgt = &b;
    swap(lft,rgt);
    cout << *lft << *rgt << endl;
    return 0;
}