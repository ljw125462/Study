//#include<iostream>
//using namespace std;
//#include<vector>
//#include<string>
//
////vector容器中存放自定义数据类型
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
//	Person p1("雷龙",45);
//	Person p2("雷大炮", 60);
//	Person p3("雷二炮", 10);
//	Person p4("雷三炮", 3);
//	Person p5("雷四炮", 9);
//
//	//向容器中添加数据
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	//遍历容器中的数据
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "姓名：" << (*it).m_name << "  年龄：" << (*it).m_age << endl;
//	}
//
//}
//
////存放自定义数据类型 指针
//void test02()
//{
//	vector <Person*>v;
//
//	Person p1("雷龙", 45);
//	Person p2("雷大炮", 60);
//	Person p3("雷二炮", 10);
//	Person p4("雷三炮", 3);
//	Person p5("雷四炮", 9);
//
//	//向容器中添加数据
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//
//	//遍历容器
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "2姓名：" << (*it)->m_name << " 年龄：" << (*it)->m_age << endl;
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