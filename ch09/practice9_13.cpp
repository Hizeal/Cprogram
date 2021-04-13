#include<iostream>
#include<list>
#include<vector>
using std::cout;using std::endl;using std::list;using std::vector;
int main(){
    list<int> ilst(4,5);
    vector<int> ivec(5,5);

    //用list<int>初始化vector<double>
    vector<double> vec(ilst.begin(),ilst.end());
    for(auto c : ilst){
        cout << c << " ";
    }
    cout << endl;
    for(auto i : vec){
        cout << i << " ";
    }
    cout << endl;
    //用vecot<int>初始化vector<double>
    vector<double> vec2(ivec.begin(),ivec.end());
    for(auto x : vec2){
        cout << x << " ";
    }
    cout << endl;
    for(auto t : ivec){
        cout << t << " ";
    }
    cout << endl;

}