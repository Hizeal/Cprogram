#ifndef CP_EX13_5_H
#define CP_EX13_5_H

#include<string>

class HasPtr{
    public:
        HasPtr(const std::string &s = std::string()):ps(new std::string(s)),i(0) {}
        HasPtr(const HasPtr& s):ps(new std::string(*s.ps)),i(s.i) {} //拷贝构造函数，第一个参数是引用类型
    private:
        std::string *ps;
        int i;
};

#endif