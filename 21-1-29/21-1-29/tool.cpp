#define _CRT_SECURE_NO_WARNINGS 1
#include "tool.h"

void darray::arr_init()
{
	int *p = new int[10];

	memset(p, 0, sizeof(int) * 10);

	delete[]p;
}

