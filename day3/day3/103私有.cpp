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
//	//修改为可读可写 年龄范围0~150
//	void setAge(int age) {
//		if (age < 0 || age>150) {
//			m_Age = 0;
//			cout << "您输入的年龄有误" << endl;
//
//			return;
//		}
//		m_Age = age;
//	}
//	int getAge() {
//		//m_Age = 0;//初始化年龄为0
//		return m_Age;
//	}
//	void setLover(string lover) {
//		m_Lover = lover;
//	}
//private:
//	string m_Name;//姓名  可读可写
//	int m_Age;//年龄 只读
//	string m_Lover;//情人 只写
//};
//
//int main()
//{
//	Person p1;
//	p1.setName("zhangsan");
//	cout << "姓名：" <<p1.getName()<< endl;
//	p1.setAge(1000);
//	cout << "年龄：" << p1.getAge() << endl;
//	p1.setLover("桥本");//只能写 外部不能读
//	system("pause");
//
//	return 0;
//}