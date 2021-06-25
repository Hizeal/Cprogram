#include<iostream>
#include<memory>
using std::cout;
using std::endl;
using std::unique_ptr;
int main(){
    unique_ptr<int> p(new int(45));
    cout << *p << endl;
    p.reset(nullptr);
}