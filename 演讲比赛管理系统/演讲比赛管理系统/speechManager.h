#pragma once
#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include"speaker.h"
#include<deque>
#include<functional>
#include<numeric>
#include<string>
#include<fstream>

//����ݽ�������
class SpeechManager
{
public:

	//���캯��
	SpeechManager();

	//�˵���ʾ
	void Show_Menu();

	//�˳�ϵͳ
	void exitSystem();

	//��������
	~SpeechManager();

	//��ʼ������������
	void initSpeech();
	
	//����12��ѡ��
	void createSpeaker();
	
	//��Ա���� �����һ�ֱ���ѡ�ֱ������  12��
	vector<int>v1;

	//��һ�ֽ���ѡ�ֵı������   6��
	vector<int>v2;

	//ʤ��ǰ����   3��
	vector<int>vVictory;

	//��ű�Ŷ�Ӧ����ѡ�ֵ�����
	map<int, Speaker>m_Speaker;

	//��ű��������ı���
	int m_index;

	//��ʼ���� �����������̿��ƺ���
	void startSpeech();

	//��ǩ
	void speechDraw();

	//����
	void speechContest();

	//��ʾ����
	void showScore();

	//�������
	void saveRecord();

	//��ȡ��¼
	void loadRecord();

	//�ж��ļ��Ƿ�Ϊ��
	bool fileIsEmpty;

	//��������¼������
	map<int, vector<string>>m_Record;
};