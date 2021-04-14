/*#include<iostream>
#include<vector>
#include<algorithm>
using std::vector;
using std::cout;
using std::count;
using std::endl;
using std::begin;
using std::end;
int main(){
    int nums[] = {1,2,3,4,5};
    int a=5;
    int result = count(begin(nums),end(nums),a);
    cout << result<<endl;
}*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> nums = {4,5,6,4,5,4,4};
    cout<< count(nums.cbegin(),nums.cend(),4);
}