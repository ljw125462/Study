//#include <iostream>
//using namespace std;
//#include<vector>
//
//void printVector(vector<int>&v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int>v1;
//	//β�巨
//	v1.push_back(11);
//	v1.push_back(22);
//	v1.push_back(33);
//	v1.push_back(44);
//	v1.push_back(55);
//
//	//����
//	printVector(v1);
//
//	//βɾ
//	v1.pop_back();
//	printVector(v1);
//
//	//����
//	v1.insert(v1.begin(), 100);
//	printVector(v1);
//
//	v1.insert(v1.begin(), 2,66);
//	printVector(v1);
//
//	//ɾ��
//	v1.erase(v1.begin());
//	printVector(v1);
//
//	//v1.erase(v1.begin(), v1.end());
//	//v1.clear();
//	printVector(v1);
//
//}
//
//int main()
//{
//
//	test01();
//
//	system("pause");
//	return 0;
//}