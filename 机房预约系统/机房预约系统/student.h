#pragma once
#include<iostream>
using namespace std;
#include"Identity.h"
#include<string>
#include"computerRoom.h"
#include<fstream>
#include"globalFile.h"
#include<vector>
#include"orderFile.h"

//ѧ����
class Student :public Identity
{
public:
	//Ĭ�Ϲ���
	Student();
		
	//�вι��� ������ѧ�š�����������
	Student(int id,string name,string pwd);

	//�˵�����
	virtual void operMenu();

	//����ԤԼ
	void applyOrder();

	//�鿴����ԤԼ
	void showMyOrder();

	//��ʾ����ԤԼ
	void showAllOrder();

	//ȡ��ԤԼ
	void cancelOrder();

	//ѧ��ѧ��
	int m_Id;

	//��������
	vector<ComputerRoom>vCom;
};