#include<iostream>
using namespace std;
#include<string>
#define MAX 1000

//������ϵ�˽ṹ��
struct Person
{
	string m_Name;//��ϵ������
	int m_Sex;//�Ա�
	int m_Age;//����
	string m_Phone;//�绰
	string m_Addr;//סַ
};
struct Addressbooks
{
	//ͨѶ¼�б������ϵ������
	struct Person personArray[MAX];
	//ͨѶ¼�е�ǰ��¼��ϵ�˸���
	int m_size;
		
};
//����ͨѶ¼�ṹ��

//��ʾ�˵�
void showMenu() {
	cout << "****************************" << endl;
	cout << "*****  ��1 �����ϵ��  *****" << endl;
	cout << "*****  ��2 ��ʾ��ϵ��  *****" << endl;
	cout << "*****  ��3 ɾ����ϵ��  *****" << endl;
	cout << "*****  ��4 ������ϵ��  *****" << endl;
	cout << "*****  ��5 �޸���ϵ��  *****" << endl;
	cout << "*****  ��6 �����ϵ��  *****" << endl;
	cout << "*****  ��0 �˳�ͨѶ¼  *****" << endl;
	cout << "****************************" << endl;
}

//�����ϵ��
void addPerson(Addressbooks *abs) {
	//���ж�ͨѶ¼�Ƿ��������˾Ͳ������
	if (abs->m_size == 1000) {
		cout << "ͨѶ¼������������ӣ�" << endl;
		return;
	}
	else {
		//�����ϵ��

		//����
		string name;
		cout << "������������"<<endl;
		cin >> name;
		abs->personArray[abs->m_size].m_Name = name;
		//�Ա�
		cout << "�������Ա�1�����У�2����Ů��" << endl;
		int sex = 0;
		
		while (true) {
			cin >> sex;
			//�������1��2�������˳��������������������롣
			if (sex == 1 || sex == 2) {
				abs->personArray[abs->m_size].m_Sex = sex;
				break;
			}
			cout << "���������������������룡" << endl;
		}
		//����
		cout << "���������䣺" << endl;
		int age = 0;

		while (true) {
			cin >> age;
			//�������1��2�������˳��������������������롣
			if (age >= 0 && age <= 130) {
				abs->personArray[abs->m_size].m_Age = age;
				break;
			}
			cout << "������������������0~130�����䣡" << endl;
		}
		//�绰
		cout << "��������ϵ�绰��" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_size].m_Phone = phone;
		//סַ
		cout << "�������ͥסַ��" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_size].m_Addr = address;

		//����ͨѶ¼����
		abs->m_size++;
		cout << "��ӳɹ���" << endl;

		system("pause");//�밴���������
		system("cls");//��������
	}
}

//��ʾ��ϵ��
void showPerson(Addressbooks * abs) {
	//ͨѶ¼����Ϊ0����ʾͨѶ¼��¼Ϊ���
	//��Ϊ0����ʾ��¼����ϵ����Ϣ
	if (abs->m_size == 0) {
		cout << "ͨѶ¼Ϊ��" << endl;
	}
	else {
		for (int i = 0; i < abs->m_size; i++) {
			cout << "������" << abs->personArray[i].m_Name << "\t";
			cout << "�Ա�" << (abs->personArray[i].m_Sex==1?"��":"Ů") << "\t";
			cout << "���䣺" << abs->personArray[i].m_Age << "\t";
			cout << "�绰��" << abs->personArray[i].m_Phone << "\t";
			cout << "סַ��" << abs->personArray[i].m_Addr << endl;
		}
	}

	system("pause");
	system("cls");
}
//�����ϵ���Ƿ���ڣ�������ڣ�������ϵ�����������еľ���λ�ã������ڷ���-1
//����1 ͨѶ¼  ����2 ����
int isExist(Addressbooks * abs,string name) {
	for (int i = 0; i < abs->m_size; i++)
	{
		if (abs->personArray[i].m_Name == name) {
			return i;//�ҵ���ϵ�� ����
		}
	}
	return -1;//δ�ҵ� ����-1
}

//ɾ��ָ����ϵ��
void deletePerson(Addressbooks * abs) {
	cout << "��������Ҫɾ������ϵ�ˣ�" << endl;
	string name;
	cin >> name;

	//ret=1 �鵽���� ret=-1 δ�鵽
	int ret = isExist(abs, name);

	if (ret != -1) {
		//�鵽��ϵ��
		for (int i = ret; i < abs->m_size;i++) {
			//����ǰ��
			abs->personArray[i] = abs->personArray[i + 1];
		}
		abs->m_size--;
		cout << "ɾ���ɹ�" << endl;
	}
	//δ�鵽
	else {
		cout << "δ���ҵ���ϵ��" << endl;
	}

	system("pause");
	system("cls");

}

//������ϵ��
void findPerson(Addressbooks * abs) {
	cout << "������Ҫ���ҵ���ϵ�ˣ�" << endl;
	string name;
	cin >> name;

	//�ж�ָ������ϵ���Ƿ����ͨѶ¼��
	int ret = isExist(abs, name);

	if (ret != -1) {
		//�ҵ���ϵ��
		cout << "������" << abs->personArray[ret].m_Name << "\t";
		cout << "�Ա�" << abs->personArray[ret].m_Sex << "\t";
		cout << "���䣺" << abs->personArray[ret].m_Age << "\t";
		cout << "�绰��" << abs->personArray[ret].m_Phone << "\t";
		cout << "סַ��" << abs->personArray[ret].m_Addr << endl;
	}
	else//δ�ҵ���ϵ��
	{
		cout << "δ�ҵ���ϵ��" << endl;
	}

	system("pause");
	system("cls");
}

void modifyPerson(Addressbooks * abs) {
	cout << "��������Ҫ�޸ĵ���ϵ�ˣ�" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);

	if (ret != -1) {//�ҵ���ϵ��

		//����
		cout << "��������Ҫ�޸ĵ�������" << endl;
		string name;
		cin >> name;
		abs->personArray[ret].m_Name = name;

		//�Ա�
		cout << "��������Ҫ�޸ĵ��Ա�,1�����У�2����Ů��" << endl;

		while (true) {
			int sex;
			cin >> sex;
			if (sex!=1&&sex!=2) {
				cout << "���������������������룡" << endl;
			}
			else
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
		}


		//����
		cout << "��������Ҫ�޸ĵ����䣺" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_Age = age;
		//�绰
		cout << "��������Ҫ�޸ĵĵ绰��" << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;
		//סַ
		cout << "��������Ҫ�޸ĵ�סַ��" << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_Addr = address;

		cout << "�޸ĳɹ���"<<endl;
	}
	else//δ�ҵ���ϵ��
	{
		cout << "δ�ҵ���ϵ��" << endl;
	}

		system("pause");
		system("cls");
}

//���������ϵ��
void cleanPerson(Addressbooks * abs) {
	cout << "�Ƿ�ȷ�����������ϵ��?ȷ���밴1��ȡ���밴�������" << endl;

	int sure;
	cin >> sure;
	while (sure == 1) {
		abs->m_size = 0;
		cout << "�����������ϵ��" << endl;
		break;
	}
	
	system("pause");
	system("cls");
}

int main() 
{
	//����ͨѶ¼�ṹ�����
	Addressbooks abs;
	//��ʼ��ͨѶ¼�е�ǰ��Ա����
	abs.m_size = 0;
	
	int select = 0;//�����û�ѡ������ı���
	
	while (true)
	{
		//��ʾ�˵�
		showMenu();
		cin >> select;

		switch (select)
		{
		case 1://�����ϵ��
			addPerson(&abs);//���õ�ַ���ݣ���������ʵ�Ρ�
			break;
		case 2://��ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3://ɾ����ϵ��
			deletePerson(&abs);
			break;
		case 4://������ϵ��
			findPerson(&abs);
			break;
		case 5://�޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6://�����ϵ��
			cleanPerson(&abs);
			break;
		case 0://�˳�ͨѶ¼

			cout << "���˳�ͨѶ¼����ӭ�´�ʹ�ã�" << endl;
			system("pause");
			return 0;
			break;
		}
	}
	
	system("pause");

	return 0;
}