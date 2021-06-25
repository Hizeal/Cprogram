#include<iostream>
#include<vector>
#include<numeric>
int main(){
    std::vector<int> nums = {1,2,3,4,5,6,7};
    std::cout << std::accumulate(nums.cbegin(),nums.cend(),0);
}