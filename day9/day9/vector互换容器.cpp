//#include <iostream>
//using namespace std;
//#include<vector>
//
////vector容器互换
//void printVector(vector<int>&v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////基本使用
//void test01()
//{
//	vector<int>v1;
//	
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	cout << "交换前的打印：" << endl;
//	printVector(v1);
//
//	vector<int>v2;
//	for (int i = 10; i > 0; i--)
//	{
//		v2.push_back(i);
//	}
//
//	printVector(v2);
//
//	cout << "交换后的打印：" << endl;
//	v1.swap(v2);
//	printVector(v1);
//	printVector(v2);
//}
//
////实际用途
////巧用swap可以收缩内存空间
//void test02()
//{
//	vector<int>v;
//	for (int i = 0; i < 10000; i++)
//	{
//		v.push_back(i);
//	}
//
//	cout << "v的容量为：" << v.capacity() << endl;
//	cout << "v的大小为：" << v.size() << endl;
//
//	v.resize(3);//重新指定大小
//	cout << "v的容量为：" << v.capacity() << endl;
//	cout << "v的大小为：" << v.size() << endl;
//
//	//swap收缩
//	vector<int>(v).swap(v);
//	cout << "交换后v的容量为：" << v.capacity() << endl;
//	cout << "交换后v的大小为：" << v.size() << endl;
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