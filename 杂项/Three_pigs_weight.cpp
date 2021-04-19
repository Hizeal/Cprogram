#include<iostream>
using namespace std;
int main(){
    //判断3只猪中最重的那一个
    int num1 = 0, num2 =0, num3 =0;
    cin >> num1 >> num2 >> num3;
    int bigger = num1 > num2 ?num1:num2;
    int biggest = bigger > num3? bigger:num3;
    cout << biggest;
    return 0;
}