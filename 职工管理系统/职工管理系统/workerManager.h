#pragma once//��ֹͷ�ļ��ظ�����
#include <iostream>//�������������ͷ�ļ�
using namespace std;//ʹ�ñ�׼�����ռ�
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"

#include<fstream>
#define FILENAME "empFile.txt"

class WorkerManager
{
public:
	//���캯��
	WorkerManager();

	//��ʾ�˵�
	void Show_Menu() ;

	//�˳�ϵͳ
	void exitSystem();

	//��¼ְ������
	int m_EmpNum;
	
	//ְ������ָ��
	Worker ** m_EmpArray;

	//����ְ��
	void Add_Emp();

	//�����ļ�
	void save();

	//�ж��ļ��Ƿ�Ϊ�� ��־
	bool m_FileIsEmpty;

	//ͳ���ļ�������
	int get_EmpNum(); 

	//��ʼ��Ա��
	void init_Emp();

	//��ʾְ��
	void Show_Emp();

	//�ж�ְ���Ƿ����,������ڷ���ְ�����������е�λ�ã������ڷ���-1
	int IsExist(int id);
	
	//ɾ��ְ��
	void Del_Emp();

	//�޸�ְ��
	void Mod_Emp();

	//����ְ��
	void Find_Emp();

	//����ְ��
	void Sort_Emp();

	//����ĵ�
	void Clean_File();

	//��������
	~WorkerManager();
};