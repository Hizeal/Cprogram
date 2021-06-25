#include<iostream>
using namespace std;
struct numbered
{
	numbered() {
		mysn = unique++;
	}
	numbered(const numbered& n) { //参数为引用
		mysn = unique++;
	}
	int mysn;
	static int unique;
};
int numbered::unique = 10;
void f(const numbered& s) {
	cout << s.mysn << endl;
}
int main() {
	numbered a, b = a, c = b;
	f(a);
	f(b);
	f(c);
}