//#include<iostream>
//using namespace std;
//#include<map>
//#include<string>
//#include<algorithm>
//
//class person
//{
//public:
//	person(string name,int age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//	string m_name;
//	int m_age;
//};
//
//class MyCompare
//{
//public:
//	const bool operator()(const person &p1,const person &p2)
//	{
//		return p1.m_age < p2.m_age;
//	}
//};
//
//void printmap(map<int, person, MyCompare>&m)
//{
//	for (map<int, person, MyCompare>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key=" << it->first << " value=" << it->second.m_name << "  " << it->second.m_age << endl;
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	person p1("À×Áú", 20);
//	person p2("À×´óÅÚ", 3);
//	person p3("À×¶şÅÚ", 100);
//	person p4("À×ËÄÅÚ", 66);
//
//	map<int, person, MyCompare>m;
//	m.insert(pair<int, person>(1, p1));
//	m.insert(pair<int, person>(2, p2));
//	m.insert(pair<int, person>(3, p3));
//	m.insert(pair<int, person>(4, p4));
//
//	printmap(m);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}