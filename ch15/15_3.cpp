#include "15_3.h"
#include<iostream>
#include<string>
using namespace std;

double print_price(ostream& os, const Quote& item, std::size_t n);
int main() {

	return 0;
}
double print_price(ostream& os, const Quote& item, std::size_t n) {
	double ret = item.new_price(n);
	os << ret << endl;
	return ret;
}