#include<iostream>
using namespace std;
int main28()
{
	int pig1 = 0;
	int pig2 = 0;
	int pig3 = 0;
	cout << "请分别输入三只小猪的体重（需为正整数）"<< endl;
	cout << "请输入小猪A的体重:"<< endl;
	cin >> pig1;
	cout << "请输入小猪B的体重:"<< endl;
	cin >> pig2;
	cout << "请输入小猪C的体重:"<< endl;
	cin >> pig3;
	cout << "小猪A的体重为" << pig1 << endl << "小猪B的体重为" << pig2 << endl << "小猪C的体重为" << pig3 << endl;
	if ((pig1 > pig2) && (pig1 > pig3)) { cout << "最重的是小猪A" << endl; }
	else if ((pig2 > pig1) && (pig2 > pig3)) { cout << "最重的是小猪B" << endl; }
	else if ((pig3 > pig1) && (pig3 > pig2)) { cout << "最重的是小猪C" << endl; }
	else if ((pig3 > pig1) && (pig3 = pig2)) { cout << "最重的是小猪B和C" << endl; }
	else if ((pig1 > pig2) && (pig3 = pig1)) { cout << "最重的是小猪A和C" << endl; }
	else if ((pig2 > pig3) && (pig2 = pig1)) { cout << "最重的是小猪A和B" << endl; }
	else if ((pig3 = pig1) && (pig3 = pig2)) { cout << "三只小猪一样重" << endl; }
	else { cout << "您的输入不符合要求，请重新输入" << endl; }
	system("pause");

	return 0;
}