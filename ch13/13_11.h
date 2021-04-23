#ifndef EX_13_11_H
#define Ex_13_11_H

#include<string>
using std::string;
class HasPtr {
public:
	HasPtr(const string& s = string()) :ps(new string(s)), i(0){}
	HasPtr(const HasPtr& hp):ps(new string(*hp.ps)),i(hp.i){}
	HasPtr& operator=(const HasPtr& hp) { //拷贝赋值运算符
		string *pos = new string(*hp.ps);		
		delete ps;
		ps = pos;
		i = hp.i;
		return *this;
	}
	~HasPtr() { //析构函数
		delete ps;
	}
private:
	string *ps;
	int i;
};

#endif