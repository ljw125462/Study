#include<iostream>
using namespace std;
#include<string>

struct student
{
	string name;
	int age;
};

struct teacher
{
	int id;//编号
	string name;//姓名
	int age;
	struct student stu;//辅导的学生
};
int main67()
{
	teacher t1;
	t1.name = "laowang";
	t1.id = 1;
	t1.age = 40;
	t1.stu.name = "xiaow ang";
	t1.stu.age = 18;

	cout << "老师姓名:" << t1.name <<"  学生姓名："<< t1.stu.name <<endl;

	system("pause");

	return 0;
}