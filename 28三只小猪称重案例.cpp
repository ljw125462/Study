#include<iostream>
using namespace std;
int main28()
{
	int pig1 = 0;
	int pig2 = 0;
	int pig3 = 0;
	cout << "��ֱ�������ֻС������أ���Ϊ��������"<< endl;
	cout << "������С��A������:"<< endl;
	cin >> pig1;
	cout << "������С��B������:"<< endl;
	cin >> pig2;
	cout << "������С��C������:"<< endl;
	cin >> pig3;
	cout << "С��A������Ϊ" << pig1 << endl << "С��B������Ϊ" << pig2 << endl << "С��C������Ϊ" << pig3 << endl;
	if ((pig1 > pig2) && (pig1 > pig3)) { cout << "���ص���С��A" << endl; }
	else if ((pig2 > pig1) && (pig2 > pig3)) { cout << "���ص���С��B" << endl; }
	else if ((pig3 > pig1) && (pig3 > pig2)) { cout << "���ص���С��C" << endl; }
	else if ((pig3 > pig1) && (pig3 = pig2)) { cout << "���ص���С��B��C" << endl; }
	else if ((pig1 > pig2) && (pig3 = pig1)) { cout << "���ص���С��A��C" << endl; }
	else if ((pig2 > pig3) && (pig2 = pig1)) { cout << "���ص���С��A��B" << endl; }
	else if ((pig3 = pig1) && (pig3 = pig2)) { cout << "��ֻС��һ����" << endl; }
	else { cout << "�������벻����Ҫ������������" << endl; }
	system("pause");

	return 0;
}