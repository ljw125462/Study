#include<iostream>
using namespace std;
#include<string>
#include<ctime>

//学生的结构体定义
struct Student
{
	string sname;
	int score;
};
//老师的结构体定义
struct Teacher
{
	string tname;
	Student sArray[5];
};

void allocateSpace(Teacher tArray[], int len)
{
	string tName = "教师";
	string sName = "学生";
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
		cout << "老师姓名：" << tArray[i].tname << endl;

		for (int j = 0; j < 5; j++) {
			cout << "\t学生姓名：" << tArray[i].sArray[j].sname << "考试分数：" << tArray[i].sArray[j].score << endl;
		}

	}
}

int main701()
{
	srand((unsigned int)time(NULL));
	//创建三名老师的数组
	Teacher tArray[3];
	//通过函数给老师信息赋值，并给学生信息赋值
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);
	//打印所有信息
	printInfo(tArray, len);
	
	system("pause");

	return 0;
}