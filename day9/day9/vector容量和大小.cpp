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
////vector�����������ʹ�С����
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	if (v1.empty())//Ϊ�棬��������Ϊ��
//	{
//		cout << "V1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "V1��Ϊ��" << endl;
//		cout << "V1������Ϊ" << v1.capacity() << endl;
//		cout << "V1�Ĵ�СΪ" << v1.size() << endl;
//	}
//
//	//����ָ����С
//	v1.resize(15,20);//�������ذ汾������ָ��Ĭ�����ֵ
//	printVector(v1);//�������ָ���ı�ԭ��������Ĭ����0���
//
//	v1.resize(5);
//	printVector(v1);//�������ָ���ı�ԭ�����ˣ��������ֻᱻɾ��
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