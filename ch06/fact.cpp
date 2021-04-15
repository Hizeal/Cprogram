#include<iostream> //对函数的定义
#include "chapter_six.h"
int fact(int val) {
	if (val == 0 || val == 1)
		return 1;
	else return val * fact(val - 1);
}