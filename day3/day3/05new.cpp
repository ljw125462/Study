//#include <iostream>
//using namespace std;
//
//int * func()
//{
//	//在堆区创建整型数据
//	//new返回的是 该数据类型的指针
//	int *p = new int(10);
//
//
//	return p;
//}
//
///*void test01()
//{
//	int *p = func();
//	cout << *p << endl;
//	//堆区的数据由程序员管理开辟和释放
//	//如果想释放堆区的数据利用关键字delete
//	cout << *p << endl;
//	delete p;
//	cout << *p << endl;
//
//}*/
//
//void test02()
//{
//	//中括号代表数组，10个元素
//	int * arr = new int[10];
//	for (int i = 0; i < 10;i++) {
//		arr[i] = i + 100;  //给十个元素赋值100~109
//	}
//	for (int i = 0; i < 10; i++) {
//		cout << arr[i] << endl;
//	}
//
//	//delete[] arr;//释放数组
//}
//
//int main()
//{
//	test02();
//
//	system("pause");
//
//	return 0;
//}