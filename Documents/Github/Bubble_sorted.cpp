#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,5,1,2,3,9,8,6,7};
    for(int i = 0; i < 9-1;i++){//总共排序数是元素个数-1
        for(int j =0;j < 9-i-1;j++){ //内层循环对比次数=元素个数-当前轮数-1
            if(arr[j] > arr[j+1]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    } 
    for(int x:arr){
        cout << x;
    }
    return 0;
}