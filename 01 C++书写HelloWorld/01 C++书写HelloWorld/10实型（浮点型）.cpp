#include<iostream>
using namespace std;
int main10()
{
	float f1 = 3.14;

	cout << "f1=" << f1 << endl;
	cout << "floatռ���ֽڴ�СΪ" << sizeof(float) << endl;
	cout << "doubleռ���ֽڴ�СΪ" << sizeof(double) << endl;
	cout << "char�ַ���ռ���ֽڴ�СΪ" << sizeof(char) << endl; 

	//��ѧ������
	float f2 = 3e2;//3e2=3*10^2;
	float f3 = 3e-2;//3e-2=3*10^(-2)
	cout << "f2=" << f2 << endl;
	cout << "f3=" << f3 << endl;

	system("pause");

	return 0;
} 