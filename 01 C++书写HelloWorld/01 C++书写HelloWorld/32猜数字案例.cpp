#include<iostream>
using namespace std;
#include<ctime>

int main32()
{
	srand((unsigned int)time(NULL));
	
	int num = rand() % 100 + 1;
	int result;
	cout << "���������²�����֣�" << endl;
	cin >> result;
	while (num!=result)
	{
		if (num > result) { 
			cout << "���²�����ֹ�С" << endl;
			cin >> result;
		}
		else{ 
			cout << "���²�����ֹ���" << endl;
			cin >> result;
		}
	}
	cout << "��ϲ�㣬������" << endl;
	system("pause");

	return 0;
}