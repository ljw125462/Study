//#include<iostream>
//using namespace std;
//#include<set>
//#include<string>
//
////set�������򣬴���Զ�����������
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
//		//�������� ����
//		return p1.m_age > p2.m_age;
//	}
//};
//
//void test01()
//{
//	//�Զ����������� ����ָ���������
//	set<Person,comparePerson>s;
//
//	Person p1("����",3);
//	Person p2("�״���", 108);
//	Person p3("�׶���", 44);
//	Person p4("������", 99);
//
//	s.insert(p1);
//	s.insert(p2);
//	s.insert(p3);
//	s.insert(p4);
//
//	for (set<Person, comparePerson>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout <<"������"<< (*it).m_name << " ���䣺" << (*it).m_age << endl;
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