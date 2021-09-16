#include<iostream>
using namespace std;
#include <string>

//将学生传入到一个参数中，打印学生身上的所有信息
//定义学生结构体
struct student
{
	string name;//姓名
	int age;//年龄
	int score;//分数
};
//值传递
void printStudent1(student s)
{
	cout << "子函数中\n姓名：" << s.name << "\n年龄：" << s.age << "\n分数：" << s.score << endl;
}
//地址传递
void printStudent2(struct student *p)
{
	cout << "子函数2中\n姓名：" << p->name << "\n年龄" << p->age << "\n分数" << p->score << endl;
}
int main68()
{
	struct student s;
	s.name = "张三";
	s.age = 18;
	s.score = 66;

	//printStudent1(s);
	printStudent2(&s);
	//cout << "姓名：" << s.name << " 年龄：" << s.age << " 分数：" << s.score << endl;


	system("pause");

	return 0;
}