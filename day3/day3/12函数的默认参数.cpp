//#include <iostream>
//using namespace std;
//
////函数的默认参数
//int func(int a, int b = 20, int c = 30) {
//	return a + b + c;
//}
//
//	//注意事项  1.如果某个位置已经有了默认参数，那么从这个位置往后，从左到右必须有默认值
//	//int func(int a, int b = 20, int c)   错误
//	//int func(int a, int b = 20, int c = 30) 正确
//	//int func(int a, int b = 20, int c = 30,int d =10)  正确 
//	//int func(int a, int b = 20, int c ,int d =10)  错误
//
//	//注意事项  2.如果函数的声明有了默认参数，函数实现就不能有默认参数
//	//声明和实现只能有一个默认参数
//int func2(int a = 10, int b = 6);
//int func2(int a, int b) {
//	return a + b;
//}
//int main()
//{
//	//如果自己传入数据，就用自己的数据，如果没有，就用默认值。
//	//语法：返回值类型 函数名（形参=默认值）{}
//	cout << func(5,15,15) << endl;
//	cout << func2() << endl;
//
//	system("pause");
//
//	return 0;
//}