//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//	Person() {
//		cout << "PersonĬ�Ϻ�������" << endl;
//	}
//	Person(int age) {
//		m_age = age;
//		cout << "Person�вκ�������" << endl;
//	}
//	Person(const Person & p) {
//		m_age = p.m_age;
//		cout << "Person�Ŀ�����������" << endl;
//	}
//	~Person() {
//		cout << "Person��������������" << endl;
//	}
//public:
//	int m_age;
//};
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);
//	cout << "p2������Ϊ" << p2.m_age << endl;
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