//#include <iostream>
//using namespace std;
//#include <string>
////类对象作为类成员
//
//class Phone
//{
//public:
//	Phone(string pName)
//	{
//		m_PName = pName;
//		cout << "Phone构造" << endl;
//	}
//
//	~Phone()
//	{
//		cout << "Phone析构调用" << endl;
//	}
//	//手机品牌名称
//	string m_PName;
//};
//
//class Person {
//public:
//	
//	//人
//	Person(string name, string pName) :m_Name(name), m_Phone(pName)
//	{
//		cout << "Person构造" << endl;
//	}
//	
//	~Person()
//	{
//		cout << "Person析构函数调用" << endl;
//	}
//
//	string m_Name;
//	Phone m_Phone;
//};
//
//void test01()
//{
//	Person p("张三","苹果");
//	cout << p.m_Name << "拿着" << p.m_Phone.m_PName << "手机" << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}