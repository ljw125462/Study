#pragma once
#include <iostream>
using namespace std;
#include<string>
#include"worker.h"

//普通员工
class Employee :public Worker
{
public:

	Employee(int id,string name,int d);//构造函数

	//显示个人信息
	virtual void showInfo();

	//获取岗位名称
	virtual string getDeptName();
};