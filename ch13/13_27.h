#ifndef CP_EX_13_27_H
#define CP_EX_13_27_H

#include<string>
using std::string;

class HasPtr {
public:
	HasPtr(const string& s = string()):ps(new string(s)),i(0),use(new size_t(1)){}
	HasPtr(const HasPtr& hp) :ps(new string(*hp.ps)), i(hp.i), use(hp.use) { ++* use; }
	HasPtr& operator=(const HasPtr& rhs) { //³ÉÔ±º¯Êý
	++* rhs.use;
	if (-- * use == 0)
	{
		delete ps;
		delete use;
	}
	ps = rhs.ps;
	i = rhs.i;
	use = rhs.use;
	return *this;
	}
	~HasPtr() {
	if (-- * use == 0)
	{
		delete ps;
		delete use;
	}
	}
private:
	string* ps;
	int i;
	size_t* use;
};
#endif // !CP_EX_13_27_H