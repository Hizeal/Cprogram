#include<iostream>
#include<vector>
using std::vector;
using std::cout;
using std::endl;

vector<int>* alloc_vec(){
    return new vector<int>();
}

void assign_vector(vector<int>* p){
    int i;
    while(std::cin >> i ){
        p->push_back(i);
    }
}
void print_vector(vector<int>* p){
    for(auto i :*p){
        cout << i << endl;
    }
}
int main(){
    auto p = alloc_vec();
    assign_vector(p);
    print_vector(p);
    delete(p);
}