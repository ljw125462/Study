//#include<iostream>
//using namespace std;
//#include<vector>
//#include<string>
//
////vector�����д���Զ�����������
//class Person
//{
//public:
//	Person(string name,int age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//
//	string m_name;
//	int m_age;
//};
//
//void test01()
//{
//	vector <Person>v;
//
//	Person p1("����",45);
//	Person p2("�״���", 60);
//	Person p3("�׶���", 10);
//	Person p4("������", 3);
//	Person p5("������", 9);
//
//	//���������������
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	//���������е�����
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "������" << (*it).m_name << "  ���䣺" << (*it).m_age << endl;
//	}
//
//}
//
////����Զ����������� ָ��
//void test02()
//{
//	vector <Person*>v;
//
//	Person p1("����", 45);
//	Person p2("�״���", 60);
//	Person p3("�׶���", 10);
//	Person p4("������", 3);
//	Person p5("������", 9);
//
//	//���������������
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//
//	//��������
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "2������" << (*it)->m_name << " ���䣺" << (*it)->m_age << endl;
//	}
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