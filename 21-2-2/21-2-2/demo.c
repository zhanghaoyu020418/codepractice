#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;


//1��ʵ��һ��ѧ���࣬Ҫ�����ѧ����name(�����ڴ�)��id��age, �ᳪ������rap��������
//ʵ����һ�����󣬵�����������Ķ����������name, id, age

class CStudent
{
	string* name = new string;
	int id;
	int age;
	string hobby[10] = { "��", "��", "rap", "����" };
public:
	void setid(int n)
	{
		id = n;
	}
	void setname(string n)
	{
		*name = n;
	}
	void setage(int n)
	{
		age = n;
	}

	int getid()
	{
		return id;
	}
	int getage()
	{
		return age;
	}
	string getname()
	{
		return *name;
	}
};


int main()
{
	CStudent s;
	s.setage(18);
	s.setid(39);
	s.setname("�����");

	cout << "name: " << s.getname << " id: " << s.getid() << " age: " << s.getage() << endl;

	return 0;
}

