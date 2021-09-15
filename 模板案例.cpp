//#include<iostream>
//using namespace std;
//
////实现通用对数组进行排序的函数
////选择排序 从大到小
//
//template<class T>
//void mySwap(T&a,T&b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//template<class T>
//void mySort(T arr[],int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i;
//		for (int j = i + 1; j < len; j++)
//		{
//			if (arr[max] < arr[j])
//			{
//				max = j;
//			}
//		}
//		if (max != i)
//		{
//			mySwap(arr[max], arr[i]);
//		}
//	}
//}
//
////提供打印数组模板
//template<class T>
//void printArray(T arr[],int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << "  ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//测试char数组
//	char charArr[] = "badcef";
//	int num = sizeof(charArr) / sizeof(char);
//	mySort(charArr,num);
//	printArray(charArr, num);
//}
//
//void test02()
//{
//	//测试int数组
//	int intArr[] = { 5,8,2,3,4,1,6,7 };
//	int num = sizeof(intArr) / sizeof(int);
//
//	mySort(intArr, num);
//	printArray(intArr, num);
//}
//
//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//	return 0;
//}