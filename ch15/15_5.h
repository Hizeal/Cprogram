#ifndef EX_15_5_H
#define EX_15_5_H


#include<string>
#include "15_3.h"
using std::string;

class Bulk_quote :public Quote{//˵�����ʷ�+����,public/private/protected
public:
    Bulk_quote() = default;
    Bulk_quote(const string& book, double p, size_t qty, double disc) :Quote(book, p), min_qty(qty), discount(disc) {}//���ȳ�ʼ�����ಿ�֣���ΰ�������˳�����γ�ʼ��
    double new_price(std::size_t n) const override;//��ʽע���ĸ���Ա������д������麯�����β��б�����override
private:
    size_t min_qty = 0;
    double discount = 0.0;
};
double Bulk_quote::new_price(std::size_t cnt) const {
    if (cnt > min_qty) {
        return cnt * (1 - discount) * price;
    }
    else {
        return cnt * price;
    }
}
#endif // !EX_15_5_H
