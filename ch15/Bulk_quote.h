#ifndef CP_Bulk_quote_H
#define CP_Bulk_quote_H

#include<string>
#include"Disc_quote.h"
using std::string;

class Bulk_quote:public Disc_quote {
public:
	Bulk_quote() = default;
	Bulk_quote(const string& book, double price, std::size_t qty, double disc) :Disc_quote(book, price, qty, disc){}
	double new_price(std::size_t) const override;
};
#endif // !CP_Bulk_quote_H

