//#include <iostream>
//using namespace std;
//#include<string>
//
//class Person
//{
//public:
//	void setName(string name) {
//		m_Name = name;
//	}
//	string getName() {
//		return m_Name;
//	}
//	//�޸�Ϊ�ɶ���д ���䷶Χ0~150
//	void setAge(int age) {
//		if (age < 0 || age>150) {
//			m_Age = 0;
//			cout << "���������������" << endl;
//
//			return;
//		}
//		m_Age = age;
//	}
//	int getAge() {
//		//m_Age = 0;//��ʼ������Ϊ0
//		return m_Age;
//	}
//	void setLover(string lover) {
//		m_Lover = lover;
//	}
//private:
//	string m_Name;//����  �ɶ���д
//	int m_Age;//���� ֻ��
//	string m_Lover;//���� ֻд
//};
//
//int main()
//{
//	Person p1;
//	p1.setName("zhangsan");
//	cout << "������" <<p1.getName()<< endl;
//	p1.setAge(1000);
//	cout << "���䣺" << p1.getAge() << endl;
//	p1.setLover("�ű�");//ֻ��д �ⲿ���ܶ�
//	system("pause");
//
//	return 0;
//}