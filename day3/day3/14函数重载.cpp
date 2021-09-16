//#include <iostream>
//using namespace std;
//#include <string>
//
//
////函数重载的条件
////1.同一个作用域下
////2.函数名称相同
////3.函数参数类型不同 或者个数不同 或者顺序不同
//void func() {
//	cout << "func函数的调用" << endl;
//}
//
////void func(int a) {
////	cout << "func2函数的调用!" << a << endl;
////}
//
//void func(string a) {
//	cout << "func3函数的调用!" << a << endl;
//}
//
//void func(int a, double b) {
//	cout << "调用1" << endl;
//}
//
//void func(double b,int a ) {
//	cout << "diaoyong2" << a << endl;
//}
//
////函数的返回值不可以作为函数重载的条件
////int func() {
////	cout << "func函数的调用" << endl;
////}      错误
//
//int main()
//{
//	/*func(3);
//	func("道法课发哈");*/
//	func(6.6,3);
//	func(1, 3.0);
//	system("pause");
//
//	return 0;
//}