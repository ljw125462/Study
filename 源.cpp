//#include<iostream>
//using namespace std;
//
////两个整形交换函数
//void swapInt(int &a, int &b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//
////交换两个浮点型的函数
//void swapDouble(double &a,double &b)
//{
//	double temp = a;
//	a = b;
//	b = temp;
//}
//
////函数模板
//template<typename T>//声明一个模板，T是一个通用数据类型
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
//	//利用函数模板
//	//1.自动类型推导
//	//mySwap(a, b);
//	//2.显示指定类型
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