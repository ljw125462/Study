//#include<iostream>
//using namespace std;
//
////�������ν�������
//void swapInt(int &a, int &b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////�������������͵ĺ���
//void swapDouble(double &a,double &b)
//{
//	double temp = a;
//	a = b;
//	b = temp;
//}
//
////����ģ��
//template<typename T>//����һ��ģ�壬T��һ��ͨ����������
//void mySwap(T &a, T &b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//void test01()
//{
//	int a = 20;
//	int b = 10;
//	//swapInt(a, b);
//	//���ú���ģ��
//	//1.�Զ������Ƶ�
//	//mySwap(a, b);
//	//2.��ʾָ������
//	mySwap<int>(a, b);
//	cout << "a =" << a << " b =" << b << endl;
//
//	double c = 2.2;
//	double d = 1.1;
//	swapDouble(c, d);
//	cout << "c =" << c << " d =" << d << endl;
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}