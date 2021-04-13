#include<iostream>
#include<algorithm>
#include<list>
#include<iterator>
#include<vector>
using std::vector;
using std::list;
using std::cout;
using std::unique_copy;
using std::back_inserter;
int main(){
    vector<int> nums{ 1, 1, 3, 3, 5, 5, 7, 7, 9 };
    list<int> num;
    unique_copy(nums.begin(),nums.end(),back_inserter(num));
    for(auto i:num){
        cout << i;
    }
}