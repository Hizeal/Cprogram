#include<iostream>
#include<initializer_list>
using namespace std;
int sum(initializer_list<int> const& ls){
    int sum=0;
    for(auto i:ls){
        sum+=i;
    }
    return sum;
}
int main(){
    auto ls = {1,2,3,4,5,6,7,8,9};
    cout << sum(ls) << endl;
}
