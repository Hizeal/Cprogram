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
class StrBlob{
public:
    using size_type = vector<string>::size_type; //类型别名
    StrBlob::StrBlob():data(make_shared<vector<string>>()){} //默认构造函数，使StrBlob()指向一个动态分配的vector
    StrBlob::StrBlob(initializer_list<string> (i1)):data(make_shared<vector<string>> (i1)){}//通过initializer_list的构造函数将参数传给对应的vector构造函数。拷贝列表中的值初始化vector
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