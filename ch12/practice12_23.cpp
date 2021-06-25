#include<iostream>
#include<memory>
#include<string>
using namespace std;
int main(){
    const char *c1 = "Hello ";
	const char *c2 = "World";
    unsigned len = strlen(c1)+strlen(c2)+1;
    char *p = new char[len]();
    strcat_s(p,len,c1);//strcat_s(destination,number_of_Elements,strSource)
    strcat_s(p,len,c2);
    cout << p <<endl;

    const string c3 = "Hello ";
    const string c4 = "World";
    strcpy_s(p,len,(c3+c4).c_str());//strcpy_s(destination,len,source_ptr).这里使用c_str()将返回一个指针
    cout << p << endl;
}