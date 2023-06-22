#include <iostream>
using namespace std;
//
//class Date
//{
//public:
//	Date(int year = 1, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	//void Print(const Date* this)
//	//{
//	//	cout << _year << "-" << _month << "-" << _day << endl;
//	//}
//	void Print()const
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//int main()
//{
//	Date d1(2023, 5, 16);
//	d1.Print();
//	const Date d2(2023, 5, 17);
//	d2.Print();//d2.Print(&d2);
//
//}
////权限的缩小和偏移
//int main()
//{
//	const int a = 1;
//	//const 修饰a表明a不能被修改
//	//也就是不能通过其他方式来修改变量a，权限由原来的可读可写，变成了可读不可写，权限缩小了。
//
//	int& b = a;//不能通过取别名来修改变量a
//	int* c = &a;//也不能通过指针来修改变量a
//
//	const int& b = a;//权限是可以偏移的，相同权限是可以访问的
//}
//int _count=0;
//class A
//{
//public:
//	A() 
//	{ ++_count; }
//	A(const A & t) 
//	{ ++_count; }
//	~A() 
//	{ --_count; }
//
//private:
//	int a;
//};
//
//void TestA()
//{
//
//	A a1, a2;
//	cout << _count << endl;
//	A a3(a1);
//	cout << _count << endl;
//	
//}
//int main()
//{
//	TestA();
//	/*cout << _count << endl;*/
//}
//
//class A
//{
//public:
//	A()
//	{
//		++_count;
//	}
//	A(const A& t)
//	{
//		++_count;
//	}
//	~A()
//	{
//		--_count;
//	}
//	static int GetCount()
//	{
//		A()
//		{
//			++_count;
//		}
//
//	}
//private:
//	static int _count;
//};
//
//int A::_count = 0;
//void TestA()
//{
//
//	A a1, a2;
//	cout <<A::GetCount()<< endl;
//	A a3(a1);
//	cout <<A::GetCount()<< endl;
//
//}
//int main()
//{
//	TestA();
//	
//}
class C
{
public:
	static C Stack()
	{
		C c1;//栈上开辟的
		return c1;

	}
	static C Static()
	{
		static C c2;//静态区开辟的
		return c2;
	}
	static C* Pile()
	{
		C* c3 = new C;//堆上开辟的
		return c3;
	}
private:
	C()
	{ }
};
int main()
{
	C c=C::Stack();//栈上开辟的
	C* c1 = C::Pile();//堆上开辟的
}
//int main()
//{
//	C c1;//栈上开辟的
//	static C c2;//静态区开辟的
//	C* c3 = new C;//堆上开辟的
//}