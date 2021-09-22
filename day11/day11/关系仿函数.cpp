//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//#include<functional>
//
////内建函数对象 关系仿函数
////大于 greater
//class MyCompare
//{
//public:
//	bool operator()(int val1,int val2)
//	{
//		return val1 > val2;
//	}
//};
//
//
//void test01()
//{
//	vector<int>v;
//
//	v.push_back(20);
//	v.push_back(50);
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(40);
//
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	//sort(v.begin(), v.end(), MyCompare());
//	sort(v.begin(), v.end(), greater<int>());
//	cout << "--------------------" << endl;
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}