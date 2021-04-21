#include<iostream>
#include<memory>
#include<string>
using namespace std;
int main(){
    int size{0};
    cin >> size;
    cin.ignore();
    char* p = new char[size+1]();//若使用getline或get，这里必须为char
    cin.getline(p,size+1);
    cout << p << endl;
    delete [] p;
}