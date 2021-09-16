#include<iostream>
using namespace std;
#include<string>

struct student
{
	string name;
	int age;
	int score;
}s3;

int main64()
{
	
	//struct 可以省略
	struct  student s1;
	s1.name = "sdkj";
	s1.age = 13;
	s1.score = 0;
	cout << "姓名：" << s1.name << " 年龄：" << s1.age << " 分数:" << s1.score << endl;

	struct student s2 = { "李四",18,66 };
	cout << "姓名：" << s2.name << " 年龄：" << s2.age << " 分数:" << s2.score << endl;


	s3.name = "sdkjsssss";
	s3.age = 132;
	s3.score = 20;
	cout << "姓名：" << s3.name << " 年龄：" << s3.age << " 分数:" << s3.score << endl;

	system("pause");
	
	return 0;
}