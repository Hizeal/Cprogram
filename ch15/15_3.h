#ifndef CP_EX_15_3_H
#define CP_EX_15_3_H

#include<string>
using std::string;

class Quote {
public:
	Quote() = default;
	Quote(const string& book, double sales_price) :bookNo(book), price(sales_price){}
	string isbn() const { return bookNo; }
	virtual double new_price(std::size_t n) const { return price * n; }
	virtual ~Quote() = default;

private:
	string bookNo;
protected:
	double price = 0.0;
};
#endif // !CP_EX_15_3_H

