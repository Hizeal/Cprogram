#include<iostream>
#include<vector>
using std::vector;
using std::cout;
using std::endl;
int main(){
    vector<int> nums;
    for(int i = 0;i<100;i++){
        cout << "capacity: "<<nums.capacity()<<" size: " << nums.size();
        nums.push_back(i);
        cout << endl;
    }
    return 0;
}