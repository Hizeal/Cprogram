#ifndef CP5_ex7_4_h
#define CP5_ex7_4_h

#include<string>

using std::string;

class Person{
    string Name;
    string Address;
public:
string const& get_name() const { return Name;} // auto get_name() const -> string const& {return Name}
string const& get_address() const{return Address;} //auto get_address() const -> string const& {return Address}
};



#endif