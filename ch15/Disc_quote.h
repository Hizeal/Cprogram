#ifndef CP_EX_15_15_H
#define CP_EX_15_15_H

#include<string>
#include"15_5.h"
using std::string;

class Disc_quote:public Quote {
public:
	Disc_quote() = default;
	Disc_quote(const string& book, double price, std::size_t qty, double disc) :Quote(book, price), quantity(qty), discount(disc){}
	double new_price(std::size_t) const = 0;//���麯����ʹ�ú��������壬������quantity��discount
protected:
	std::size_t quantity;
	double discount;
};
#endif // !CP_EX_15_15_H
