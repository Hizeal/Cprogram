#include<iostream>
#include<string>
using namespace std;
int main(int arrnum,char **argv){
    string str;
    for(int i=1;i != arrnum;i++){
        str+=string(argv[i])+" ";
    }
    cout << str << endl;
    return 0;
}