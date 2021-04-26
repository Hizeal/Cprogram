#include"15_3.h"
#include"15_5.h"
#include<iostream>
#include<string>
using namespace std;
double print_price(ostream& os, const Quote& item, std::size_t n);
int main() {
	Quote q("textbook", 10.60);
	Bulk_quote bq("textbook", 10.60, 10, 0.3);

	print_price(std::cout, q, 12);
	print_price(std::cout, bq, 12);
	return 0;
}
double print_price(ostream& os, const Quote& item, std::size_t n) {
	double ret = item.new_price(n);
	os << ret << endl;
	return ret;
}