#include<iostream>
using namespace std;
#include<string>
#include<ctime>

//ѧ���Ľṹ�嶨��
struct Student
{
	string sname;
	int score;
};
//��ʦ�Ľṹ�嶨��
struct Teacher
{
	string tname;
	Student sArray[5];
};

void allocateSpace(Teacher tArray[], int len)
{
	string tName = "��ʦ";
	string sName = "ѧ��";
	string nameSeed = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		tArray[i].tname = tName + nameSeed[i];

		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sname = sName + nameSeed[j];
			tArray[i].sArray[j].score = rand() % 61 + 40;
		}
	}
}

void printInfo(struct Teacher tArray[],int len)
{
	for (int i = 0; i < len; i++) {
		cout << "��ʦ������" << tArray[i].tname << endl;

		for (int j = 0; j < 5; j++) {
			cout << "\tѧ��������" << tArray[i].sArray[j].sname << "���Է�����" << tArray[i].sArray[j].score << endl;
		}

	}
}

int main701()
{
	srand((unsigned int)time(NULL));
	//����������ʦ������
	Teacher tArray[3];
	//ͨ����������ʦ��Ϣ��ֵ������ѧ����Ϣ��ֵ
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);
	//��ӡ������Ϣ
	printInfo(tArray, len);
	
	system("pause");

	return 0;
}