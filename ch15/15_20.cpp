#include"15_3.h"
#include"Bulk_quote.h"
#include"Limit_quote.h"
#include"Disc_quote.h"
#include<iostream>

using namespace std;
class Base {
public:
	void pub_mem();
protected:
	int pro_mem;
private:
	char pri_mem;
};
struct Pub_Derv:public Base
{
	void memfcn(Base& b) { b = *this; }
};
struct Pri_Derv:private Base
{
	void memfcn(Base& b) { b = *this; }
};
struct Pro_Derv :private Base
{
	void memfcn(Base& b) { b = *this; }
};
struct Derived_from_public:public Pub_Derv
{
	void memfcn(Base& b) { b = *this; }
};
struct Derived_from_protected :protected Pro_Derv
{
	void memfcn(Base& b) { b = *this; }
};
struct Derived_from_private:private Pri_Derv
{
	void memfcn(Base& b) { b = *this; }
};
int main() {
	Pub_Derv d1;
	Base* p = &d1;

	Pri_Derv d2;
	Base* p = &d2;

	Pro_Derv d3;
	Base* p = &d3;

	Derived_from_public dd1;
	Base* p = &dd1;

	Derived_from_protected dd2;
	Base* p = &dd2;

	Derived_from_private dd3;
	Base* p = &dd3;
}