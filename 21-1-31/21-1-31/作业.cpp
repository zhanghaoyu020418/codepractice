
#include <iostream>
using namespace std;
namespace YIMU
{
	int* p = NULL;
	int len = 0;
	int maxSize = 0;
	void insert(int data)
	{
		if (len >= maxSize)//����������˵���ռ䲻��
		{
			maxSize = maxSize + ((maxSize >> 1) > 0 ? (maxSize >> 1) : 1);
			int* temp = new int[maxSize];//�����µ��㹻���ڴ�
			for (int i = 0; i < len; i++)//��ԭ���ڴ������ֵ���������µ�����
			{
				temp[i] = p[i];
			}
			if (p != NULL)
				delete[]p;
			p = temp;//pָ���µ��ڴ棬��������������
		}
		p[len++] = data;//��ֵ�ŵ����
	}
	void dele(int data)
	{
		for (int i = 0; i < len; i++)
		{
			if (p[i] == data)
			{
				for (int j = i; j < len; j++)
				{
					p[j] = p[j + 1];
				}
				len--;
				return;
			}
		}
		cout << "û�����Ҫɾ��ֵ" << data << endl;
	}
	void change(int data, int val)
	{
		for (int i = 0; i < len; i++)
		{
			if (p[i] == data)
			{
				p[i] = val;
				return;
			}
		}
	}
	void find(int data)
	{
		for (int i = 0; i < len; i++)
		{
			if (p[i] == data)
			{
				cout << "�±�:" << i << "ֵ:" << p[i] << endl;
				return;
			}
		}

	}
	void print()
	{
		for (int i = 0; i < len; i++)
		{
			cout << p[i] << " ";
		}
		cout << endl;
	}
}
using namespace YIMU;
int main()
{
//	for (int i = 0; i < 11; i++)
//	{
//		insert(i + 1);
//		/*cout << maxSize << endl;*/
//	}
//	print();
//	dele(9999);
//	print();
//	find(3);
//	change(7, 666);
//	print();
//
//	delete[]p;
//	p = NULL;
	
	int* p = NULL;
	p = (int*)realloc(p, 12);
	printf("%p\n", p);
	/*for (int i = 0; i < 3; i++)
	{
		p[i] = i + 1;
	}
	int* q = NULL;
	for (int i = 0; i < 3; i++)
	{
		q = &p[i];
		printf("%p  %d\t", q, *q);
	}
	cout << endl;*/
	p = (int*)realloc(p, 16);
	printf("%p\n", p);
	/*p[3] = 4;
	for (int i = 0; i < 4; i++)
	{
		q = &p[i];
		printf("%p  %d\t", q, *q);
	}*/

	system("pause");
	return 0;
}

