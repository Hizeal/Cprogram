#ifndef CP_EX7_27_H
#define CP_EX7_27_H
#include<string>

class Screen{
public:

    using pos = std::string::size_type;
    Screen() = default;
    Screen(pos wt,pos ht,char c):width(wt),height(ht),contents(wt * ht,c){}
    Screen(pos wt,pos ht):width(wt),height(ht),contents(wt*ht,' '){}
    char get() const{
        return contents[cursor];
    }
    char get(pos r,pos c) const{ //两个函数重载
        return contents[r * width+ c];
    };
    inline Screen& move(pos r,pos c);
    inline Screen& set(char);
    inline Screen& set(pos,pos,char); //内联函数

    Screen& display(std::ostream& os){
        do_display(os);
        return *this;
    }
    const Screen& display(std::ostream& os) const{ //同样重载
        do_display(os);
        return *this;
    }
private:
    void do_display(std::ostream& os) const{
        os<< contents;
    }
private:
    pos cursor = 0;
    pos width =0,height=0;
    std::string contents;
};
inline Screen& Screen::move(pos r,pos c){ //位于类外，必须同时提供类命和函数名
    cursor = r*width+c;
    return *this;
}
inline Screen& Screen::set(char c){
    contents[cursor] = c;
    return *this;
}
inline Screen& Screen::set(pos r,pos col,char ch){
    contents[r*width+col] = ch;
    return *this;
}
#endif