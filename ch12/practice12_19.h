#ifndef EX12_19_H
#define EX12_19_H

#include <vector>
#include <memory>
#include <string>
#include <initializer_list>
#include <exception>
using std::string;
using std::initializer_list;
using std::vector;
using std::shared_ptr;
using std::make_shared;
using std::out_of_range;
using std::weak_ptr;
class StrBlobPtr;
class StrBlob{
public:
    friend class StrBlobPtr; //友元声明
    StrBlobPtr begin();
    StrBlobPtr end();//定义end和begin操作
    using size_type = vector<string>::size_type; //类型别名
    StrBlob():data(make_shared<vector<string>>()){} //默认构造函数，使StrBlob()指向一个动态分配的vector
    StrBlob(initializer_list<string> (i1)):data(make_shared<vector<string>> (i1)){}//通过initializer_list的构造函数将参数传给对应的vector构造函数。拷贝列表中的值初始化vector
    size_type size() const{
        return data->size();
    }
    bool empty() const{
        return data->empty();
    }
    void push_back(const string& t){
        data->push_back(t);
    }
    void pop_back() const{
        check(0,"pop_back on empty StrBlob");
        data->pop_back();
    }
    string& StrBlob::front() const{
        check(0,"front on empty StrBlob");
        return data->front();
    }
    string& StrBlob::back() const{
        check(0,"back on empty StrBlob");
        return data->back();
    }
private:
    void StrBlob::check(size_type i,const string &str) const{
        if(i >= data->size()){
            throw out_of_range(str);
        }
    }
private:
    shared_ptr<vector<string>> data;
};


class StrBlobPtr{
public:
    StrBlobPtr():curr(0){} //构造函数初始化列表将curr显式初始化为0
    StrBlobPtr(StrBlob& a,size_t sz = 0):wptr(a.data),curr(sz){} //初始化wptr和sz
    bool operator!=(const StrBlobPtr& p) { return p.curr != curr; } //自定义一个操作符
    string& StrBlobPtr::deref() const{ //检查vector是否安全以及curr是否在合法范围内
        auto p = check(curr,"deference past end");
        return (*p)[curr];
    }
    StrBlobPtr& incr(){ //返回递增后的对象的引用
        check(curr,"increment past end of StrBlobPtr");
        ++curr;
        return *this;
    }
private:
    shared_ptr<vector<string>> StrBlobPtr::check(std::size_t i,const string& str) const{
        auto ret = wptr.lock();//确定wptr所指的vector是否存在
        if(!ret){
            throw std::runtime_error("unbound StrBlobPtr");
        }
        if(i >= ret->size()){
            throw out_of_range(str);
        }
        return ret;
    }
private:
    weak_ptr<vector<string>> wptr; //将wptr定义为weak_ptr
    size_t curr;
};
StrBlobPtr StrBlob::begin()
{
	return StrBlobPtr(*this);
}
StrBlobPtr StrBlob::end()
{
	return StrBlobPtr(*this, data->size());
}
#endif
