#include<iostream> //�Ժ����Ķ���
#include "chapter_six.h"
int fact(int val) {
	if (val == 0 || val == 1)
		return 1;
	else return val * fact(val - 1);
}