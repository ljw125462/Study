#include<iostream>
using namespace std;
#include<string>
#define MAX 1000

//定义联系人结构体
struct Person
{
	string m_Name;//联系人姓名
	int m_Sex;//性别
	int m_Age;//年龄
	string m_Phone;//电话
	string m_Addr;//住址
};
struct Addressbooks
{
	//通讯录中保存的联系人数组
	struct Person personArray[MAX];
	//通讯录中当前记录联系人个数
	int m_size;
		
};
//定义通讯录结构体

//显示菜单
void showMenu() {
	cout << "****************************" << endl;
	cout << "*****  按1 添加联系人  *****" << endl;
	cout << "*****  按2 显示联系人  *****" << endl;
	cout << "*****  按3 删除联系人  *****" << endl;
	cout << "*****  按4 查找联系人  *****" << endl;
	cout << "*****  按5 修改联系人  *****" << endl;
	cout << "*****  按6 清空联系人  *****" << endl;
	cout << "*****  按0 退出通讯录  *****" << endl;
	cout << "****************************" << endl;
}

//添加联系人
void addPerson(Addressbooks *abs) {
	//先判断通讯录是否满，满了就不在添加
	if (abs->m_size == 1000) {
		cout << "通讯录已满，不可添加！" << endl;
		return;
	}
	else {
		//添加联系人

		//姓名
		string name;
		cout << "请输入姓名："<<endl;
		cin >> name;
		abs->personArray[abs->m_size].m_Name = name;
		//性别
		cout << "请输入性别，1代表男，2代表女：" << endl;
		int sex = 0;
		
		while (true) {
			cin >> sex;
			//如果输入1或2，可以退出，如果输入错误，重新输入。
			if (sex == 1 || sex == 2) {
				abs->personArray[abs->m_size].m_Sex = sex;
				break;
			}
			cout << "您的输入有误，请重新输入！" << endl;
		}
		//年龄
		cout << "请输入年龄：" << endl;
		int age = 0;

		while (true) {
			cin >> age;
			//如果输入1或2，可以退出，如果输入错误，重新输入。
			if (age >= 0 && age <= 130) {
				abs->personArray[abs->m_size].m_Age = age;
				break;
			}
			cout << "您的输入有误，请输入0~130的年龄！" << endl;
		}
		//电话
		cout << "请输入联系电话：" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_size].m_Phone = phone;
		//住址
		cout << "请输入家庭住址：" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_size].m_Addr = address;

		//更新通讯录人数
		abs->m_size++;
		cout << "添加成功！" << endl;

		system("pause");//请按任意键继续
		system("cls");//清屏操作
	}
}

//显示联系人
void showPerson(Addressbooks * abs) {
	//通讯录人数为0，提示通讯录记录为监控
	//不为0，显示记录的联系人信息
	if (abs->m_size == 0) {
		cout << "通讯录为空" << endl;
	}
	else {
		for (int i = 0; i < abs->m_size; i++) {
			cout << "姓名：" << abs->personArray[i].m_Name << "\t";
			cout << "性别：" << (abs->personArray[i].m_Sex==1?"男":"女") << "\t";
			cout << "年龄：" << abs->personArray[i].m_Age << "\t";
			cout << "电话：" << abs->personArray[i].m_Phone << "\t";
			cout << "住址：" << abs->personArray[i].m_Addr << endl;
		}
	}

	system("pause");
	system("cls");
}
//检测联系人是否存在，如果存在，返回联系人所在数组中的具体位置，不存在返回-1
//参数1 通讯录  参数2 姓名
int isExist(Addressbooks * abs,string name) {
	for (int i = 0; i < abs->m_size; i++)
	{
		if (abs->personArray[i].m_Name == name) {
			return i;//找到联系人 返回
		}
	}
	return -1;//未找到 返回-1
}

//删除指定联系人
void deletePerson(Addressbooks * abs) {
	cout << "请输入您要删除的联系人：" << endl;
	string name;
	cin >> name;

	//ret=1 查到此人 ret=-1 未查到
	int ret = isExist(abs, name);

	if (ret != -1) {
		//查到联系人
		for (int i = ret; i < abs->m_size;i++) {
			//数据前移
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_size--;
		cout << "删除成功" << endl;
	}
	//未查到
	else {
		cout << "未查找到联系人" << endl;
	}

	system("pause");
	system("cls");

}

//查找联系人
void findPerson(Addressbooks * abs) {
	cout << "请输入要查找的联系人：" << endl;
	string name;
	cin >> name;

	//判断指定的联系人是否存在通讯录中
	int ret = isExist(abs, name);

	if (ret != -1) {
		//找到联系人
		cout << "姓名：" << abs->personArray[ret].m_Name << "\t";
		cout << "性别：" << abs->personArray[ret].m_Sex << "\t";
		cout << "年龄：" << abs->personArray[ret].m_Age << "\t";
		cout << "电话：" << abs->personArray[ret].m_Phone << "\t";
		cout << "住址：" << abs->personArray[ret].m_Addr << endl;
	}
	else//未找到联系人
	{
		cout << "未找到联系人" << endl;
	}

	system("pause");
	system("cls");
}

void modifyPerson(Addressbooks * abs) {
	cout << "请输入你要修改的联系人：" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);

	if (ret != -1) {//找到联系人

		//姓名
		cout << "请输入你要修改的姓名：" << endl;
		string name;
		cin >> name;
		abs->personArray[ret].m_Name = name;

		//性别
		cout << "请输入你要修改的性别,1代表男，2代表女：" << endl;

		while (true) {
			int sex;
			cin >> sex;
			if (sex!=1&&sex!=2) {
				cout << "您的输入有误，请重新输入！" << endl;
			}
			else
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
		}


		//年龄
		cout << "请输入你要修改的年龄：" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_Age = age;
		//电话
		cout << "请输入你要修改的电话：" << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;
		//住址
		cout << "请输入你要修改的住址：" << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_Addr = address;

		cout << "修改成功！"<<endl;
	}
	else//未找到联系人
	{
		cout << "未找到联系人" << endl;
	}

		system("pause");
		system("cls");
}

//清空所有联系人
void cleanPerson(Addressbooks * abs) {
	cout << "是否确定清空所有联系人?确认请按1，取消请按任意键：" << endl;

	int sure;
	cin >> sure;
	while (sure == 1) {
		abs->m_size = 0;
		cout << "已清空所有联系人" << endl;
		break;
	}
	
	system("pause");
	system("cls");
}

int main() 
{
	//创建通讯录结构体变量
	Addressbooks abs;
	//初始化通讯录中当前人员个数
	abs.m_size = 0;
	
	int select = 0;//创建用户选择输入的变量
	
	while (true)
	{
		//显示菜单
		showMenu();
		cin >> select;

		switch (select)
		{
		case 1://添加联系人
			addPerson(&abs);//利用地址传递，可以修饰实参。
			break;
		case 2://显示联系人
			showPerson(&abs);
			break;
		case 3://删除联系人
			deletePerson(&abs);
			break;
		case 4://查找联系人
			findPerson(&abs);
			break;
		case 5://修改联系人
			modifyPerson(&abs);
			break;
		case 6://清空联系人
			cleanPerson(&abs);
			break;
		case 0://退出通讯录

			cout << "已退出通讯录，欢迎下次使用！" << endl;
			system("pause");
			return 0;
			break;
		}
	}
	
	system("pause");

	return 0;
}