#ifndef CP_EX_13_19_H
#define CP_EX_13_19_H

#include<string>
using std::string;

class Employee {
public:
	Employee() = default;//默认构造函数
	Employee(const string& name) {}//接受名字的构造函数
	Employee& operator=(const Employee& s) = delete;
	const int id() const { return id_; }
private:
	int id_;
	string name_;
	static int s_increase;
};
int Employee::s_increase = 0;
Employee::Employee() {
	id_ = s_increase++;
}
Employee::Employee(const string& name) {
	id_ = s_increase++;
	name_ = name;
}
#endif
