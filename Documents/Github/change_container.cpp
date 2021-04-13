#include<vector>
#include<iostream>
using std::vector;
using std::cout;
using std::cin;
using std::endl;
int main(){
    vector<int> vi = {0,1,2,3,4,5,6,7,8,9};
    auto iter = vi.begin();
    while (iter != vi.end())
    {
        if(*iter & 0x1){
            iter = vi.insert(iter,*iter);  //复制当前元素      
            iter+=2;        //跳过当前元素及插入之前的元素
        }else {
            iter = vi.erase(iter);
        }
    }
    for(auto i : vi){
        cout << i;
    }   
    
}