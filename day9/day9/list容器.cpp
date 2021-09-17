//#include <iostream>
//using namespace std;
//#include<list>
//
////list容器构造函数
//
////遍历容器
//void printList(const list<int>&L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//创建容器
//	list<int>L1;
//
//	//添加数据
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	printList(L1);
//
//	//区间方式构造
//	list<int>L2(L1.begin(), L1.end());
//	cout << "L2为：" << endl;
//	printList(L2);
//
//	//拷贝构造
//	list<int>L3(L2);
//	cout << "L3为：" << endl;
//	printList(L3);
//
//	//n个elem
//	list<int>L4(10, 999);
//	cout << "L4为：" << endl;
//	printList(L4);
//}
//
//
//int main()
//{
//
//	test01();
//
//	system("pause");
//	return 0;
//}