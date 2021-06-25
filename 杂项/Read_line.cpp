#include<iostream>
#include<string>
#include<sstream>
using std::string;
using std::getline;
using std::cout;
using std::cin;
using std::stringstream;
int main(){
    string line;
    while (getline(cin,line))
    {
        int sum=0,x;
        stringstream ss(line);
        while(ss >> x){
            sum+=x;
        }
        cout << sum<<" ";
    }
    return 0; 
}