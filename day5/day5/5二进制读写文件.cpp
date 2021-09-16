//#include <iostream>
//using namespace std;
//#include<fstream>
//
////二进制写文件
//class Person
//{
//public:
//	char m_Name[64];
//	int m_Age;
//};
//
//void test01() {
//	ofstream ofs;
//	ofs.open("person.txt", ios::out | ios::binary);
//	Person p = { "lijiawei",21 };
//	ofs.write((const char *)&p, sizeof(Person));
//	ofs.close();
//}
//
//
//int main()
//{
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}