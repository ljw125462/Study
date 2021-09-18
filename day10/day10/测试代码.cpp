//#include<iostream>
//#include<map>
//#include<string>
//#include<algorithm>
//using namespace std;
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//	string m_name;
//	int m_age;
//};
//class Mycompare
//{
//public:
//	const bool operator()(const Person &p1, const Person &p2)
//	{
//		return p1.m_age <= p2.m_age;
//	}
//};
//void myprint(map<Person, int, Mycompare>& m)
//{
//	for (map<Person, int, Mycompare>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << it->first.m_name << " " << it->first.m_age << " " << it->second << endl;
//	}
//}
//void test01()
//{
//	map<Person, int, Mycompare> m;
//	Person P1("张三", 18);
//	Person P2("李四", 20);
//	Person P3("王五", 30);
//	Person P4("赵六", 13);
//	m.insert(make_pair(P1, 90));
//	m.insert(make_pair(P2, 80));
//	m.insert(make_pair(P3, 85));
//	m.insert(make_pair(P4, 91));
//	myprint(m);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}