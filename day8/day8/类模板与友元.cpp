//#include<iostream>
//using namespace std;
//#include<string>
//
//template<class T1,class T2>
//class Person;
//
////类外实现
//template<class T1, class T2>
//void printPerson2(Person<T1, T2> p)
//{
//	cout << "类外实现--姓名：" << p.m_name << " 年龄：" << p.m_age << endl;
//}
//
//
////通过全局函数 打印Person信息
//
//template<class T1,class T2>
//class Person
//{
//	//全局函数类内实现
//	friend void printPerson(Person<T1,T2>p)
//	{
//		cout << "姓名：" << p.m_name << " 年龄：" << p.m_age << endl;
//	}
//
//	//全局函数 类外实现
//	//如果全局函数是类外实现，需要让编译器提前知道
//	friend void printPerson2<>(Person<T1, T2> p);
//
//public:
//	Person(T1 name, T2 age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//private:
//	T1 m_name;
//	T2 m_age;
//};
//
////1.全局函数在类内实现
//void test01()
//{
//	Person<string, int>p("大炮", 55);
//	printPerson(p);
//}
//
//void test02()
//{
//	Person<string, int>p2("二炮", 45);
//		printPerson2(p2);
//}
//
//int main()
//{
//
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}