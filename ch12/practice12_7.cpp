#include<iostream>
#include<vector>
#include<memory>
using std::iostream;
using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::shared_ptr;
using std::make_shared;
shared_ptr<vector<int>> alloc_vector(){
    return make_shared<vector<int>> ();
}
void assign_vector(shared_ptr<vector<int>> p){ //创建一个智能指针
    int i;
    while(std::cin >> i ){
        p->push_back(i);
    }
}
void print_vector(shared_ptr<vector<int>> p){
    for(auto i :*p){
        cout << i << endl;
    }
}
int main(){
    auto p = alloc_vector();
    assign_vector(p);
    print_vector(p);
}