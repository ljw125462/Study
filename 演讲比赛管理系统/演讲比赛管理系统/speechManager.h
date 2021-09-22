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

//设计演讲管理类
class SpeechManager
{
public:

	//构造函数
	SpeechManager();

	//菜单显示
	void Show_Menu();

	//退出系统
	void exitSystem();

	//析构函数
	~SpeechManager();

	//初始化容器和属性
	void initSpeech();
	
	//创建12名选手
	void createSpeaker();
	
	//成员属性 保存第一轮比赛选手编号容器  12人
	vector<int>v1;

	//第一轮晋级选手的编号容器   6人
	vector<int>v2;

	//胜出前三名   3人
	vector<int>vVictory;

	//存放编号对应具体选手的容器
	map<int, Speaker>m_Speaker;

	//存放比赛轮数的变量
	int m_index;

	//开始比赛 比赛整个流程控制函数
	void startSpeech();

	//抽签
	void speechDraw();

	//比赛
	void speechContest();

	//显示分数
	void showScore();

	//保存分数
	void saveRecord();

	//读取记录
	void loadRecord();

	//判断文件是否为空
	bool fileIsEmpty;

	//存放往届记录的容器
	map<int, vector<string>>m_Record;
};