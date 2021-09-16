#include<iostream>
using namespace std;
int main24()
{
	int score;
	cout << "请输入分数:" << endl;
	cin >> score;
	cout << "您输入的分数为" << score << endl;
	if (score >= 600) 
	{ 
		cout << "恭喜考上一本" << endl;
		if (score >= 700) { cout << "学校为北大" << endl; }
		else if(score>=650) { cout << "学校为清华" << endl; }
		else { cout << "学校为人大" << endl; }
	}
	else if(score>=300) { cout << "恭喜考上二本" << endl; }
	else{cout << "未考上本" << endl;}
	system("pause");

	return 0;
}