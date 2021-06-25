#include<iostream>
#include "practice12_19.h"
#include<string>
#include<fstream>
using namespace std;
int main(){
    string s;
    StrBlob SB;
    ifstream ifs("");//括号内为文件路径，读取文件内容存于ifs
    while (getline(ifs,s))
    {
       SB.push_back(s);
    }
    for(StrBlobPtr sbp = SB.begin();sbp !=SB.end();sbp.incr()){
        cout << sbp.deref() <<" ";
    }
    
}