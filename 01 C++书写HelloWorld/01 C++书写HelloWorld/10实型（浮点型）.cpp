#include<iostream>
using namespace std;
int main10()
{
	float f1 = 3.14;

	cout << "f1=" << f1 << endl;
	cout << "float占用字节大小为" << sizeof(float) << endl;
	cout << "double占用字节大小为" << sizeof(double) << endl;
	cout << "char字符型占用字节大小为" << sizeof(char) << endl; 

	//科学计数法
	float f2 = 3e2;//3e2=3*10^2;
	float f3 = 3e-2;//3e-2=3*10^(-2)
	cout << "f2=" << f2 << endl;
	cout << "f3=" << f3 << endl;

	system("pause");

	return 0;
} 