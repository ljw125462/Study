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
	
	//struct ����ʡ��
	struct  student s1;
	s1.name = "sdkj";
	s1.age = 13;
	s1.score = 0;
	cout << "������" << s1.name << " ���䣺" << s1.age << " ����:" << s1.score << endl;

	struct student s2 = { "����",18,66 };
	cout << "������" << s2.name << " ���䣺" << s2.age << " ����:" << s2.score << endl;


	s3.name = "sdkjsssss";
	s3.age = 132;
	s3.score = 20;
	cout << "������" << s3.name << " ���䣺" << s3.age << " ����:" << s3.score << endl;

	system("pause");
	
	return 0;
}