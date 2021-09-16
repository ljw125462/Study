//#include <iostream>
//using namespace std;
//
//class AbstractDrinking
//{
//public:
//	//煮水
//	virtual void Boil() = 0;
//
//	//冲泡
//	virtual void Brew() = 0;
//
//	//倒入杯中
//	virtual void BourInCup() = 0;
//
//	//加入作料
//	virtual void PutSomething() = 0;
//
//	//制作饮品
//	void makeDrink() {
//		Boil();
//		Brew();
//		BourInCup();
//		PutSomething();
//	}
//};
//
////制作咖啡
//class Coffee :public AbstractDrinking
//{
//public:
//	virtual void Boil()
//	{
//		cout << "煮山泉" << endl;
//	}
//
//	//冲泡
//	virtual void Brew()
//	{
//		cout << "冲泡" << endl;
//	}
//
//	//倒入杯中
//	virtual void BourInCup()
//	{
//		cout << "倒入杯中" << endl;
//	}
//
//	//加入作料
//	virtual void PutSomething()
//	{
//		cout << "加入糖或牛奶" << endl;
//	}
//};
//
//class Tea :public AbstractDrinking
//{
//public:
//	virtual void Boil()
//	{
//		cout << "煮矿泉水" << endl;
//	}
//
//	//冲泡
//	virtual void Brew()
//	{
//		cout << "冲泡茶" << endl;
//	}
//
//	//倒入杯中
//	virtual void BourInCup()
//	{
//		cout << "倒入茶杯中" << endl;
//	}
//
//	//加入作料
//	virtual void PutSomething()
//	{
//		cout << "加入枸杞等辅料" << endl;
//	}
//};
//
//void doWork(AbstractDrinking * abs)
//{
//	abs->makeDrink();
//	delete abs;
//}
//
//void test01()
//{
//	doWork(new Coffee);
//
//	cout << "--------------" << endl;
//
//	doWork(new Tea);
//}
//
//int main()
//{
//
//	test01();
//
//	system("pause");
//
//	return 0;
//}