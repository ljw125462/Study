#include<iostream>
using namespace std;
#include"speechManager.h"
#include<string>

int main()
{
	//�������������
	SpeechManager sm;
	
	//����ѡ�ִ���
	/*for (map<int, Speaker>::iterator it = sm.m_Speaker.begin(); it != sm.m_Speaker.end(); it++)
	{
		cout << "ѡ�ֱ�ţ�" << it->first << " ������" << it->second.m_name << " ������" << it->second.m_score<<endl;
	}*/

	int choice = 0;

	while (true)
	{
		sm.Show_Menu();
		cout << "����������ѡ��" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1://��ʼ����
			sm.startSpeech();
			break;
		case 2://�鿴���������¼
			sm.loadRecord();
			break;
		case 3://��ձ�����¼
			break;
		case 0://�˳�ϵͳ
			sm.exitSystem();
			break;
		default:
			system("cls");
			break;
		}
	}

	system("pause");
	return 0;
}