//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//	Person() {
//		cout << "Person默认函数调用" << endl;
//	}
//	Person(int age) {
//		m_age = age;
//		cout << "Person有参函数调用" << endl;
//	}
//	Person(const Person & p) {
//		m_age = p.m_age;
//		cout << "Person的拷贝函数调用" << endl;
//	}
//	~Person() {
//		cout << "Person的析构函数调用" << endl;
//	}
//public:
//	int m_age;
//};
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);
//	cout << "p2的年龄为" << p2.m_age << endl;
//}
//
//void doWork(Person p)
//{
//
//}
//
//void test02()
//{
//	Person p;
//	doWork(p);
//}
//
//Person doWork2()
//{
//	Person p1;
//	return p1;
//}
//
//void test03()
//{
//	Person p = doWork2();
//}
//
//
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//
//	system("pause");
//	return 0;
//}