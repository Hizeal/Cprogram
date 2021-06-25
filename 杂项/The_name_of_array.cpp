#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,2,3};
    cout << sizeof(arr) << endl;
    cout << arr[0] << endl;
    cout << &arr[0] << endl;
    cout << arr << endl;
    cout << &arr[1] << endl;
}