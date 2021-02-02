#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;


//1、实现一个学生类，要求这个学生有name(堆区内存)，id，age, 会唱，跳，rap，打篮球
//实例化一个对象，调用所有他会的东西，并输出name, id, age

class CStudent
{
	string* name = new string;
	int id;
	int age;
	string hobby[10] = { "唱", "跳", "rap", "篮球" };
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
	s.setname("张昊宇");

	cout << "name: " << s.getname << " id: " << s.getid() << " age: " << s.getage() << endl;

	return 0;
}

