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
	int id;//���
	string name;//����
	int age;
	struct student stu;//������ѧ��
};
int main67()
{
	teacher t1;
	t1.name = "laowang";
	t1.id = 1;
	t1.age = 40;
	t1.stu.name = "xiaow ang";
	t1.stu.age = 18;

	cout << "��ʦ����:" << t1.name <<"  ѧ��������"<< t1.stu.name <<endl;

	system("pause");

	return 0;
}