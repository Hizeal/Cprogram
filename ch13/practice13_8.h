#ifndef CP_EX13_8_H
#define CP_EX13_8_H

#include<string>

class HasPtr{
    public:
        HasPtr(const std::string &s = std::string()):ps(new std::string(s)),i(0) {}
        HasPtr(const HasPtr& s):ps(new std::string(*s.ps)),i(s.i) {} //拷贝构造函数
        HasPtr& operator=(const HasPtr& s){ //左值返回，应该是引用
            std::string *new_ps = new std::string(*s.ps);//动态分配new string
            delete(ps);//删掉ps并释放其资源
            ps = new_ps;
            i = s.i;
            return *this;
        }
    private:
        std::string *ps;
        int i;
};

#endif