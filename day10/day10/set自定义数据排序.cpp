//#include<iostream>
//using namespace std;
//#include<set>
//#include<string>
//
////set容器排序，存放自定义数据类型
//class Person
//{
//public:
//	Person(string name,int age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//	string m_name;
//	int m_age;
//};
//
//class comparePerson
//{
//public:
//	bool operator()(const Person&p1,const Person&p2)
//	{
//		//按照年龄 降序
//		return p1.m_age > p2.m_age;
//	}
//};
//
//void test01()
//{
//	//自定义数据类型 都会指定排序规则
//	set<Person,comparePerson>s;
//
//	Person p1("雷龙",3);
//	Person p2("雷大炮", 108);
//	Person p3("雷二炮", 44);
//	Person p4("雷三炮", 99);
//
//	s.insert(p1);
//	s.insert(p2);
//	s.insert(p3);
//	s.insert(p4);
//
//	for (set<Person, comparePerson>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout <<"姓名："<< (*it).m_name << " 年龄：" << (*it).m_age << endl;
//	}
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}