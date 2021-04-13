#include<iostream>
using namespace std;
int main(){
   int a = 10;
    int b = 12;
/*    const int *p = &a;
    cout << p << endl;
    cout << *p << endl;
    p = &b;
    cout << p << endl;
    cout << *p << endl;
    *p = 13;//p的指向可以修改，原来指a，可以改为b。 但p指向的值，即b的值，无法修改   
*/

/*    int *const p = &a;
    *p = 13;
    cout << *p << endl; //可以修改指针指向的值，但不可修改其指向
*/

    const int * const p = &a //不能修改指向和值
}