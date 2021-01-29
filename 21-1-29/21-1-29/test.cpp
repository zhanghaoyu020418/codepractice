#define _CRT_SECURE_NO_WARNINGS 1
//1、在命名空间中实现一个动态数组，能用到C++的语法就用C++的语法
#include <iostream>
#include <string.h>
#include "tool,h.h"
using namespace std;
using namespace zhy;

struct stu
{
	int age;
	int num;
	char a[20];
};

int main()
{
	stu *p = new stu{ 18,19 };


	delete p;


	//stu s = { 18, 39 };

	//int * p = (int *)&s;

	//int a = 0;

	//char * p = (char *)&a;

	//*p = 'z';
	//*(p + 1) = 'h';
	//*(p + 2) = 'y';
	//*(p + 3) = '\0';

	//cout << *(p + 1) << endl;

	//int *ptr = new int[10];
	//memset(ptr, 0, sizeof(int) * 10);

	//for (int i = 0; i < 10; i++)
	//{
	//	cout << ptr[i] << " ";
	//}

	//delete[]ptr;

	return 0;
}



