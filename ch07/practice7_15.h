#ifndef CP5_ex7_15_h
#define CP5_ex7_15_h

#include<string>

using namespace std;
istream& read(istream& is,Person&);

struct Person{
    Person() = default;
    Person(const string& sname,const string& saddre):Name(sname),Address(saddre){}//构造函数
    Person(istream& is){read(is,*this);}//成员函数声明
    string Name;
    string Address;
    string const& get_name() const { return Name;} // auto get_name() const -> string const& {return Name}
    string const& get_address() const{return Address;} //auto get_address() const -> string const& {return Address}
};
std::istream& read(std::istream& is,Person& person){
    return is>>person.Name >> person.Address;
}
std::ostream& print(std::ostream& os,Person& person){
    return os <<person.Name<<person.Address;
}



#endif


