#include<list>
#include<iostream>
#include<deque>
using std::string;
using std::list;
using std::deque;
using std::cout;
using std::cin;
using std::endl;
int main(){
    list<int> nums;
    int i ;
    deque<int> odd,even;
    while (cin >> i)
    {
       nums.push_back(i);
    }
    for(auto j:nums){
        (j & 0x1 ? odd:even).push_back(j); //
    }
    for(auto x : odd){
        cout << x << " ";
    }
    cout << endl;
    for(auto y:even){
        cout << y << " ";
    }
    cout << endl;
}