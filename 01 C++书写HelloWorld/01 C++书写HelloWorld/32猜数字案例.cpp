#include<iostream>
using namespace std;
#include<ctime>

int main32()
{
	srand((unsigned int)time(NULL));
	
	int num = rand() % 100 + 1;
	int result;
	cout << "请输入您猜测的数字：" << endl;
	cin >> result;
	while (num!=result)
	{
		if (num > result) { 
			cout << "您猜测的数字过小" << endl;
			cin >> result;
		}
		else{ 
			cout << "您猜测的数字过大" << endl;
			cin >> result;
		}
	}
	cout << "恭喜你，猜中了" << endl;
	system("pause");

	return 0;
}