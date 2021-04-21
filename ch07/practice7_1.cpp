#include<iostream>
#include<string>
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::cerr;
struct Sales_data
{
    string bookNo;
    unsigned units_sold =0;
    double revenue = 0.0;
};
int main(){
    Sales_data totals;
    if(cin >> totals.bookNo >> totals.units_sold >> totals.revenue){
        Sales_data trans;
        while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue)
        {
            if(trans.bookNo == totals.bookNo){
                totals.units_sold+=trans.units_sold;
                totals.revenue += trans.revenue;
            }else{
                cout << totals.bookNo << " " << totals.units_sold << " "<<totals.revenue << endl;
                totals = trans;
            }
        }
        cout << totals.bookNo << totals.units_sold << totals.revenue << endl;
    }else{
        cerr << " no data?" << endl; //标准错误输出流
        return -1;
    }
    return 0;
}
