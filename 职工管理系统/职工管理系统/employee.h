#pragma once
#include <iostream>
using namespace std;
#include<string>
#include"worker.h"

//��ͨԱ��
class Employee :public Worker
{
public:

	Employee(int id,string name,int d);//���캯��

	//��ʾ������Ϣ
	virtual void showInfo();

	//��ȡ��λ����
	virtual string getDeptName();
};