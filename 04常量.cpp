#include <iostream>
using namespace std;

//常量的定义方式
//define 宏常量
//const修饰的常量

#define Day 7
int main4()
{

	cout << "一周总共有：" << Day << "天" << endl;
	int month = 12;
	month = 24;
	cout << "一年共有：" << month << "月" << endl;

	system("pause");

	return 0;


}