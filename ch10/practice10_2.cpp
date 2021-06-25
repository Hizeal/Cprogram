#include<algorithm>
#include<iostream>
#include<string>
#include<list>
int main(){
    std::list<std::string> SEQ = {"aa","sdsadd","sad","aa"};
    std::cout << std::count(SEQ.cbegin(),SEQ.cend(),"aa");
}