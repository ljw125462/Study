//#include<iostream>
//using namespace std;
//#include<set>
//
//void printSet(set<int>&s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////set容器构造和赋值
//void test01()
//{
//	set<int>s1;
//	//插入数据时只有insert方式
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(40);
//	s1.insert(20);
//	s1.insert(20);
//
//	printSet(s1);
//
//	//拷贝构造
//	set<int>s2(s1);
//	cout << "s2=";
//	printSet(s2);
//
//	set<int>s3;
//	s3 = s2;
//	cout << "s3=";
//	printSet(s3);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}