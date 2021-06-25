#include<iostream>
#include<memory>
#include<string>
using namespace std;
int main(){
    int n = 6;
    allocator<string> alloc;
    auto const p = alloc.allocate(n);
    auto q = p;
    string s;
    while (cin >> s && q!=p+n)
    {
        alloc.construct(q++,s);
    }
    while (q!=p)
    {
        cout << *--q << endl;
        alloc.destroy(q);
    }
    alloc.deallocate(p,n);
    
    
}