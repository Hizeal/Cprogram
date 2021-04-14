#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
int main(){
    vector<int> nums{0,1,2,4,5,6};
    fill_n(nums.begin(),nums.size(),0);
    for(auto i:nums){
        cout << i;
    }
    
}