#include<iostream>
using namespace std;
#include <string>

//��ѧ�����뵽һ�������У���ӡѧ�����ϵ�������Ϣ
//����ѧ���ṹ��
struct student
{
	string name;//����
	int age;//����
	int score;//����
};
//ֵ����
void printStudent1(student s)
{
	cout << "�Ӻ�����\n������" << s.name << "\n���䣺" << s.age << "\n������" << s.score << endl;
}
//��ַ����
void printStudent2(struct student *p)
{
	cout << "�Ӻ���2��\n������" << p->name << "\n����" << p->age << "\n����" << p->score << endl;
}
int main68()
{
	struct student s;
	s.name = "����";
	s.age = 18;
	s.score = 66;

	//printStudent1(s);
	printStudent2(&s);
	//cout << "������" << s.name << " ���䣺" << s.age << " ������" << s.score << endl;


	system("pause");

	return 0;
}