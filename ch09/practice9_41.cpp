#include<iostream>
#include<vector>
#include<string>
using std::cout;
using std::endl;
using std::string;
using std::vector;
int main(){
    vector<char> s{'h','w'};
    string str(s.cbegin(),s.cend());
    for(auto i:str){
        cout << i<< endl;
    }

}