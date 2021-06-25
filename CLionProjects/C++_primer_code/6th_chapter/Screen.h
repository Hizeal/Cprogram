//
// Created by Haruna on 2021/6/25.
//

#ifndef C___PRIMER_CODE_SCREEN_H
#define C___PRIMER_CODE_SCREEN_H

#include <string>
#include <iostream>
class Screen {
public:
    using pos = std::string::size_type;

    Screen()=default;
    Screen(pos h,pos wd):cursor(h),height(h),width(wd),contents(h*wd,' '){}
    Screen(pos h,pos wd,char c):cursor(h),height(h),width(wd),contents(h*wd,c){} //这里显式初始化cursor
    //成员函数重载，参数的数量和类型存在区别
    //定义在类内部函数。自动隐式内联
    char get() const{
        return contents[cursor];
    }
    //显式内联
    inline char get(pos ht,pos wd) const;
    Screen& move(pos r,pos c);
    Screen& set(char );
    Screen& set(pos,pos,char);
    Screen& display(std::ostream& os){
        do_display(os);
        return *this;
    }
    Screen& display(std::ostream& os) const{
        do_display(os);
        reuturn *this;
    }

    void some_member() const;
private:
    void do_display(std::ostream& os) const{
        return os<<contents;//显示内容
    }
    pos cursor =0;
    pos height=0,width=0;
    std::string contents;

    mutable size_t access_ctr; //即便在一个const对象内也能被修改
};
//类外部用inline修饰函数定义

inline Screen& Screen::move(pos r, pos c) {
    pos row = r*width;
    cursor = row +c;
    return *this;//左值形式返回对象
}
inline char Screen::get(pos ht, pos wd) const {
    pos row = r*width;
    return contents[row+c];
}
inline Screen& Screen::set(char c) {
    contents[cursor] = c;
    return *this;
}
inline Screen& Screen::set(pos r, pos col, char ch) {
    contents[r*width+col] = ch;
    return *this;
}
void Screen::some_member() const {
    ++access_ctr;
}
#endif //C___PRIMER_CODE_SCREEN_H
