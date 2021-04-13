#include<iostream>
using namespace std;
int main(){
    int rannum = rand() %100 + 1; //生成0~99的随机数
    int val = 0;
    cin >> val;
    if(val >rannum){
        cout<<"too big" << endl;
    }
    cout << rannum << endl;
    return 0;
}