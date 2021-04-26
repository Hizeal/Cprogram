#ifndef EX_15_7_H
#define EX_15_7_H


#include<string>
#include "15_5.h"
using std::string;

class Limit_quote :public Quote {
public:
    Limit_quote() = default;
    Limit_quote(const string& book, double p, size_t qty, double disc) :Quote(book, p), max_qty(qty), discount(disc) {}
    double new_price(std::size_t n) const override;
private:
    size_t max_qty = 0;
    double discount = 0.0;
};
double Limit_quote::new_price(std::size_t cnt) const {
    if (cnt > max_qty) {
        return max_qty * price * discount + (cnt - max_qty) * price;
    }
    else {
        return cnt * price;
    }
}
#endif // !EX_15_5_H
