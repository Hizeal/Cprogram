#ifndef BolbPtr_H
#define BlobPtr_H

#include "Blob.h"
#include<vector>
#include<memory>

template<typename T> class BolbPtr;//声明模板自身
template<typename T> bool operator==(const BolbPtr<T>& lhs,const BolbPtr<T>& rhs);//前置声明，bolbptr中所需要的
template<typename T>bool operator<=(const BolbPtr<T>& lhs,const BolbPtr<T>& rhs);//建立对应实例及其友元之间友好关系，一对一友好关系

template<typename T> class BolbPtr{
    friend bool operator==<T>(const BolbPtr&,const BolbPtr&);//每个Bolbptr能够访问相等与小于运算符
    friend bool operator<=<T>(const BolbPtr&,const BolbPtr&);
public:
    BolbPtr():curr(0);
    BolbPtr(BolbPtr<T> & a,size_t sz):wptr(a.data),curr(sz){}//用a.data和sz初始化成员

    T& operator*() const{
        auto p = check(curr,"dereference past end");
        return (*p)[curr];
    }
    BolbPtr& operator++();//处于类模板的作用域中，可直接使用模板名而不提供实参
    BolbPtr& operator--();//前置运算符，第14章出现

    BolbPtr operator++(int);
    BolbPtr operator--(int);
private:
    std::shared_ptr<std::vector<T>> check(std::size_t i,const std::string& msg) const;
    std::weak_ptr<std::vector<T>> wptr;
    std::size_t curr;
};

template<typename T>
BolbPtr<T>& BolbPtr<T>::operator++(){
    check(curr,"increment over end of StrBlob");
    ++cur;
    return *this;
}

template<typename T>
BolbPtr<T>& BolbPtr<T>::operator--(){
    --curr;
    check(curr,"decrement past begin of blobptr");
    return *this;
}

template<typename T> //类外定义，遇到类名才表示进入类作用域
BolbPtr<T> BolbPtr<T>::operator++(int){ //类外，此时必须带上参数T。返回类型位于类作用域外，返回类型是一个实例化
    BolbPtr ret = *this;//此时算是进入类作用域，无须重复模板实参
    ++*this;
    return ret;
}

template<typename T>
BolbPtr<T> BolbPtr<T>::operator--(int){ //递增或递减对象但返回原值
    BolbPtr ret = *this;
    --*this;
    return ret;
}

template<typename T> bool operator==(const BolbPtr<T> &lhs, const BolbPtr<T> &rhs)
{
	if (lhs.wptr.lock() != rhs.wptr.lock())
	{
		throw runtime_error("ptrs to different Blobs!");
	}
	return lhs.i == rhs.i;
}

template<typename T> bool operator< (const BolbPtr<T> &lhs, const BolbPtr<T> &rhs)
{
	if (lhs.wptr.lock() != rhs.wptr.lock())
	{
		throw runtime_error("ptrs to different Blobs!");
	}
	return lhs.i < rhs.i;
}
#endif