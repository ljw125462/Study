#include<iostream>
using namespace std;
int main24()
{
	int score;
	cout << "���������:" << endl;
	cin >> score;
	cout << "������ķ���Ϊ" << score << endl;
	if (score >= 600) 
	{ 
		cout << "��ϲ����һ��" << endl;
		if (score >= 700) { cout << "ѧУΪ����" << endl; }
		else if(score>=650) { cout << "ѧУΪ�廪" << endl; }
		else { cout << "ѧУΪ�˴�" << endl; }
	}
	else if(score>=300) { cout << "��ϲ���϶���" << endl; }
	else{cout << "δ���ϱ�" << endl;}
	system("pause");

	return 0;
}