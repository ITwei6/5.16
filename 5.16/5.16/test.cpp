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
////Ȩ�޵���С��ƫ��
//int main()
//{
//	const int a = 1;
//	//const ����a����a���ܱ��޸�
//	//Ҳ���ǲ���ͨ��������ʽ���޸ı���a��Ȩ����ԭ���Ŀɶ���д������˿ɶ�����д��Ȩ����С�ˡ�
//
//	int& b = a;//����ͨ��ȡ�������޸ı���a
//	int* c = &a;//Ҳ����ͨ��ָ�����޸ı���a
//
//	const int& b = a;//Ȩ���ǿ���ƫ�Ƶģ���ͬȨ���ǿ��Է��ʵ�
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
		C c1;//ջ�Ͽ��ٵ�
		return c1;

	}
	static C Static()
	{
		static C c2;//��̬�����ٵ�
		return c2;
	}
	static C* Pile()
	{
		C* c3 = new C;//���Ͽ��ٵ�
		return c3;
	}
private:
	C()
	{ }
};
int main()
{
	C c=C::Stack();//ջ�Ͽ��ٵ�
	C* c1 = C::Pile();//���Ͽ��ٵ�
}
//int main()
//{
//	C c1;//ջ�Ͽ��ٵ�
//	static C c2;//��̬�����ٵ�
//	C* c3 = new C;//���Ͽ��ٵ�
//}