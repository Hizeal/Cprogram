//
// Created by Haruna on 2021/6/25.
//

#ifndef C___PRIMER_CODE_SALES_DATA_H
#define C___PRIMER_CODE_SALES_DATA_H

#include <string>
class Sales_data {
public:
    //添加friend关键字，能够访问非公有成员.为非成员函数作友元声明
    friend Sales_data add(const Sales_data&,const Sales_data&);
    friend std::istream &read(std::istream&,Sales_data&);
    friend std::ostream  &print(std::ostream&,const Sales_data&);
    //构造函数
    Sales_data() = default; //为内置类型数据成员提供初始值，可用默认构造函数；否则，使用构造函数初始值列表
    Sales_data(const std::string &s):bookNo(s){ }
    Sales_data(const std::string& s,unsigned n,double p):bookNo(s),units_sold(n),revenue(p*n){ } //构造函数初始值列表
    Sales_data(std::istream &);

    std::string isbn() const {return bookNo;}
    Sales_data& combine(const Sales_data&); //成员函数必须在类内部声明，但可在类内和类外定义

//定义在类内部的函数是隐式的inline函数
private:
    inline double avg_price() const{
        return units_sold?revenue/units_sold:0;
    }
    std::string bookNo;
    unsigned units_sold =0;
    double revenue = 0.0;
};

//非成员函数是类接口的组成部分
Sales_data add(const Sales_data&,const Sales_data&);
std::istream &read(std::istream&,Sales_data&);
std::ostream  &print(std::ostream&,const Sales_data&);

//外部定义成员函数


Sales_data& Sales_data::combine(const Sales_data &rhs) {
    units_sold+=rhs.units_sold;
    revenue += rhs.revenue;
    return *this; //返回调用该函数的对象
}

Sales_data::Sales_data(std::istream &is) { //调用read函数以给数据成员赋以初值
    read(is,*this);
}


//定义非成员函数,若成员为private时，可被类的成员函数访问，但不能被使用该类的代码访问
std::istream &read(std::istream& is,Sales_data &item){
    double price =0;
    is >> item.bookNo >> item.units_sold >> price; //输入bookno units_sold，计算revenue
    item.revenue = price*item.units_sold;
    return is;
}

std::ostream &print(std::ostream& os, const Sales_data &item){
    os << item.isbn()<< " " << item.units_sold << " " << item.revenue << " " <<item.avg_price();
    return os;
}

Sales_data add(const Sales_data& lhs,const Sales_data& rhs){ //存放两笔交易的和
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}


//非成员函数
#endif //C___PRIMER_CODE_SALES_DATA_H
