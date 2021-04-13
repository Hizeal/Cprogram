#include<iostream>
using namespace std;
int main(){
    int arr[] = {0,1,2,3,4,5};
    int n = sizeof(arr) / sizeof(int);
    for(int i = 0;i <n/2;i++){
        int tmp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = tmp;
    }
    for(int x:arr){
        cout << x;
    }
}