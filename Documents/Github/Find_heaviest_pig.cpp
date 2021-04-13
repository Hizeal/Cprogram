#include<iostream>
using namespace std;
int MAx(int x,int y){
    return x>y?x:y;
}
int main(){
    int max =0;
    int arr[5] ={300,650,200,400,250};
    int length = sizeof(arr) / sizeof(int);
    for(int i =0;i<length;i++){
        max = MAx(max,arr[i]);
    }
    cout << max;
    return 0;
}