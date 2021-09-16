//#include<iostream>
//using namespace std;
//#include"MyArray.hpp"
//#include<string>
//
//void printIntArray(MyArray <int>& arr)
//{
//	for (int i = 0; i < arr.getSize(); i++)
//	{
//		cout << arr[i] << endl;
//	}
//}
//
//void test01()
//{
//	MyArray <int>arr1(5);
//
//	for (int i = 0; i < 5; i++)
//	{
//		//利用尾插法向数组中插入数据
//		arr1.Push_Back(i);
//	}
//	cout << "arr1的打印输出为" << endl;
//
//	printIntArray(arr1);
//
//	cout << "arr1的容量为：" << arr1.getCapacity() << endl;
//	cout << "arr1的大小为：" << arr1.getSize() << endl;
//	MyArray <int>arr2(arr1);
//
//	cout << "arr2的打印输出为" << endl;
//	printIntArray(arr2);
//
//	//尾删
//	arr2.Pop_Back();
//	cout << "arr2的容量为：" << arr2.getCapacity() << endl;
//	cout << "arr2的大小为：" << arr2.getSize() << endl;
//
//	//MyArray <int>arr3(100);
//	//arr3 = arr1;
//}
//
////测试自定义数据类型
//class Person
//{
//public:
//	Person() {};
//	Person(string name, int age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//
//	string m_name;
//	int m_age;
//};
//
//void printPersonArray(MyArray <Person>& arr)
//{
//	for (int i = 0; i < arr.getSize(); i++)
//	{
//		cout << "姓名：" << arr[i].m_name << " 年龄：" << arr[i].m_age << endl;
//	}
//}
//
//void test02()
//{
//	MyArray <Person> arr(10);
//	Person p1("雷龙",88);
//	Person p2("雷大炮", 3);
//	Person p3("雷二炮", 99);
//	Person p4("雷三炮", 30);
//	Person p5("雷四炮", 20);
//
//	//将数据插入到数组中
//	arr.Push_Back(p1);
//	arr.Push_Back(p2);
//	arr.Push_Back(p3);
//	arr.Push_Back(p4);
//	arr.Push_Back(p5);
//
//	printPersonArray(arr);
//
//	//打印数组容量
//	cout << "arr的容量为：" << arr.getCapacity() << endl;
//
//	//打印数组大小
//	cout << "arr的大小为：" << arr.getSize() << endl;
//}
//
//int main()
//{
//
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}