#ifndef CP_EX13_26_H
#define CP_EX13_26_H

#include<vector>
#include<string>
#include<initializer_list>
#include<memory>
#include<exception>
#include <stdexcept>
using namespace std;

class ConstStrBlobPtr; //ǰ������
class StrBlob {
public:
	using size_type = vector<string>::size_type;
	friend class ConstStrBlobPtr; //��Ԫ
	ConstStrBlobPtr begin() const;//����������ʹ�ú����ɼ�
	ConstStrBlobPtr end() const;
	StrBlob() :data(make_shared<vector<string>>()) {} //Ĭ�Ϲ���
	StrBlob(initializer_list<string> il) :data(make_shared<vector<string>>(il)) {}//���캯��
	StrBlob(const StrBlob& sb) :data(make_shared<vector<string>>(*sb.data)) {}//�������캯��
	StrBlob& operator=(const StrBlob& s);//������ֵ�����

	size_type size() const { return data->size(); } //��Ա����
	bool empty() const { return data->empty(); }

	void push_back(const string& s) { return data->push_back(s); }
	void pop() {
		check(0, "pop_back on empty StrBlob");

	}
	std::string& front()
	{
		check(0, "front on empty StrBlob");
		return data->front();
	}

	std::string& back()
	{
		check(0, "back on empty StrBlob");
		return data->back();
	}

	const std::string& front() const
	{
		check(0, "front on empty StrBlob");
		return data->front();
	}
	const std::string& back() const
	{
		check(0, "back on empty StrBlob");
		return data->back();
	}
private:
	void check(size_type i, const string& mgs) const { //������public��
		if (i >= data->size())
			throw std::out_of_range(mgs);
	}
private:
	shared_ptr<vector<string>> data;

};

class ConstStrBlobPtr
{
public:
	ConstStrBlobPtr() :curr(0) {}
	ConstStrBlobPtr(const StrBlob& a, size_t sz = 0) :wptr(a.data), curr(sz) {} // should add const
	bool operator!=(ConstStrBlobPtr& p) { return p.curr != curr; }//һ����˵�����Զ��幹�캯��������Ҫ�������캯���뿽����ֵ�����
	const string& deref() const
	{ // return value should add const
		auto p = check(curr, "dereference past end");
		return (*p)[curr];
	}
	ConstStrBlobPtr& incr()
	{
		check(curr, "increment past end of StrBlobPtr");
		++curr;
		return *this;
	}

private:
	std::shared_ptr<vector<string>> check(size_t i, const string& msg) const
	{
		auto ret = wptr.lock();
		if (!ret) throw std::runtime_error("unbound StrBlobPtr");
		if (i >= ret->size()) throw std::out_of_range(msg);
		return ret;
	}
	std::weak_ptr<vector<string>> wptr;
	size_t curr;
};

ConstStrBlobPtr StrBlob::begin() const // should add const
{
	return ConstStrBlobPtr(*this);
}
ConstStrBlobPtr StrBlob::end() const // should add const
{
	return ConstStrBlobPtr(*this, data->size());
}

StrBlob& StrBlob::operator=(const StrBlob& sb)
{
	data = std::make_shared<vector<string>>(*sb.data);
	return *this;
}
#endif // !CP_EX13_26_H