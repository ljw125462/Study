#include<iostream>
using namespace std;
#include<string>


//�ṹ�嶨��
struct Hero {
	string name;
	int age;
	string sex;
};

void bubbleSort(Hero arr[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j].age > arr[j + 1].age)
			{
				struct Hero temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void printHero(struct Hero arr[],int len) {
	for (int i = 0; i < len; i++) {
		cout << "������" << arr[i].name << "  ���䣺" << arr[i].age << "  �Ա�" << arr[i].sex << endl;
	}
}
int main702()
{
	Hero arr[5] = { {"����",23,"��"} ,
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"} };
	int len;
	len = sizeof(arr) / sizeof(arr[0]);
	/*for(int i = 0; i < len; i++ ) {
		cout << "������" << harray[i].name << "���䣺" << harray[i].age << "�Ա�" << harray[i].sex << endl;
	}*/
	//��������
	bubbleSort(arr,len);
	printHero(arr, len);

	system("pause");

	return 0;
}