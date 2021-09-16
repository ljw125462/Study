#include<iostream>
using namespace std;
#include<string>


//结构体定义
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
		cout << "姓名：" << arr[i].name << "  年龄：" << arr[i].age << "  性别：" << arr[i].sex << endl;
	}
}
int main702()
{
	Hero arr[5] = { {"刘备",23,"男"} ,
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"} };
	int len;
	len = sizeof(arr) / sizeof(arr[0]);
	/*for(int i = 0; i < len; i++ ) {
		cout << "姓名：" << harray[i].name << "年龄：" << harray[i].age << "性别：" << harray[i].sex << endl;
	}*/
	//进行排序
	bubbleSort(arr,len);
	printHero(arr, len);

	system("pause");

	return 0;
}