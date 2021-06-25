//
// Created by Haruna on 2021/6/25.
//

#ifndef C___PRIMER_CODE_PERSON_H
#define C___PRIMER_CODE_PERSON_H

#include <string>
#include <iostream>
class Person {
public:
    friend std::istream &read(std::istream&,Person&)
    friend std::ostream &print(std::ostream&,const Person&);

    Person() = default;
    Person(const string& n,const string& m):Name(n),Address(m){}
    Person(std::istream& is){read(is,*this);}

    auto get_name() const->std::string const& {return Name;} //指定返回类型为string&
    auto get_address() const->std::string const& {return Address;}

private:
    std::string Name;
    std::string Address;
};

std::istream &read(std::istream&,Person&)
std::ostream &print(std::ostream&,const Person&);

std::istream &read(std::istream& is,Person& person){
    is >> person.Name >> person.Address;
    return is;
}

std::ostream &print(std::ostream& os,const Person& person){
    os << person.Name << " "<<person.Address;
}
#endif //C___PRIMER_CODE_PERSON_H
