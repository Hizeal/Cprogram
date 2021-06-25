//
// Created by Haruna on 2021/6/25.
//

#ifndef C___PRIMER_CODE_EX_7_31_H
#define C___PRIMER_CODE_EX_7_31_H

class Y;//仅声明类。在声明之后，定义之前，为不完全类型：定义指向这种类型的指针或引用
class X {
    Y* y = nullptr;
};
class Y{
    X x ;
};


#endif //C___PRIMER_CODE_EX_7_31_H
