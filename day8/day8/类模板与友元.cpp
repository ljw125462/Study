//#include<iostream>
//using namespace std;
//#include<string>
//
//template<class T1,class T2>
//class Person;
//
////����ʵ��
//template<class T1, class T2>
//void printPerson2(Person<T1, T2> p)
//{
//	cout << "����ʵ��--������" << p.m_name << " ���䣺" << p.m_age << endl;
//}
//
//
////ͨ��ȫ�ֺ��� ��ӡPerson��Ϣ
//
//template<class T1,class T2>
//class Person
//{
//	//ȫ�ֺ�������ʵ��
//	friend void printPerson(Person<T1,T2>p)
//	{
//		cout << "������" << p.m_name << " ���䣺" << p.m_age << endl;
//	}
//
//	//ȫ�ֺ��� ����ʵ��
//	//���ȫ�ֺ���������ʵ�֣���Ҫ�ñ�������ǰ֪��
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
////1.ȫ�ֺ���������ʵ��
//void test01()
//{
//	Person<string, int>p("����", 55);
//	printPerson(p);
//}
//
//void test02()
//{
//	Person<string, int>p2("����", 45);
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