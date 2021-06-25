#ifndef CP_EX7_24_H
#define CP_EX7_24_H
#include<string>

class Screen{
public:

    using pos = std::string::size_type;
    Screen() = default;
    Screen(pos wt,pos ht,char c):width(wt),height(ht),contents(wt * ht,c){}
    char get() const{
        return contents[cursor];
    }
    char get(pos r,pos c) const{
        return contents[r * width+ c];
    };
private:
    pos cursor = 0;
    pos width =0,height=0;
    std::string contents;
};
#endif