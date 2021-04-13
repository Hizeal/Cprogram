#include<iostream>
using namespace std;
int main(){
    int arr[] ={0,1,2,3,4,5,6};
    int *p = arr;
    cout << &arr[0] << endl;
    cout << p << endl; //指针p指向数组的首项
    cout << *p << endl;
    p++;
    cout << p << endl;
    cout << *p << endl;
    return 0;
}