#include<vector>
#include<iostream>
using std::vector;
using std::cout;
using std::cin;
using std::endl;
int main(){
    vector<int> nums;
    int num;
    while (cin >> num)
    {
        nums.push_back(num);/* code */
    }
    cout << nums.at(0) << endl;//at
    cout << nums[0] << endl;
    cout << nums.front() << endl;
    cout << *nums.begin() << endl;
}