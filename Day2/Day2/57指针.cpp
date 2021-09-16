#include<iostream>
using namespace std;
int main57()
{
	int a;
	int *p = &a;
	cout << "字节占用：" << sizeof(int *) << "字节" << endl;

	system("pause");

	return 0;
}