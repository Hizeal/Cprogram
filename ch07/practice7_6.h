#ifndef CP_ex7_6_h
#define CP_ex7_6_h
#include<iostream>
#include<string>
using std::string;
struct Sales_data
{
    string isbn() const {return bookNo;}
    Sales_data& combine(const Sales_data&);
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};
Sales_data& Sales_data::combine(const Sales_data& rhs){ //返回类型是Sales_data，因为是左值，因此为引用
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}
std::istream& read(std::istream& is, Sales_data& item){ //IO类不能被拷贝，因此只能引用
    double price = 0.0;
    is >> item.bookNo >> item.revenue >> item.units_sold;
    item.revenue = price*item.units_sold;
    return is;
}
std::ostream& print(std::ostream& os,const Sales_data& item){
    os<<item.bookNo<<" "<<item.units_sold<<" "<<item.revenue;
}
Sales_data add(const Sales_data& lhs,const Sales_data& rhs){
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

#endif