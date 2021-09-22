//#include<iostream>
//using namespace std;
//#include<vector>
//#include<algorithm>
//
//class myPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void test01()
//{
//	vector<int>v1;
//	vector<int>v2;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	for (int i = 6; i < 15; i++)
//	{
//		v2.push_back(i);
//	}
//	for_each(v1.begin(), v1.end(), myPrint());
//	cout << endl;
//	for_each(v2.begin(), v2.end(), myPrint());
//	cout << endl;
//	vector<int>vTarget;
//	vTarget.resize(min(v1.size(), v2.size()));
//	vector<int>::iterator it=
//	set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),vTarget.begin());
//	for_each(vTarget.begin(), it, myPrint());
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}