//#include <iostream>
//using namespace std;
////普通写法
//class Calculator
//{
//public:
//	int getResult(string oper)
//	{
//		if (oper == "+") {
//			return m_Num1 + m_Num2;
//		 }
//		else if (oper == "-") {
//			return m_Num1 - m_Num2;
//		}
//		else if (oper == "*") {
//			return m_Num1 * m_Num2;
//		}
//
//	}
//
//	int m_Num1;
//	int m_Num2;
//};
//
//class AbstractCalculator
//{
//	
//public:
//	virtual int getResult()
//	{
//		return 0;
//	}
//
//	int m_Num1;
//	int m_Num2;
//};
////加法计算器类
//class AddCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
////减法计算器类
//class ReduceCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
////乘法计算器类
//class MulCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 * m_Num2;
//	}
//};
//
////多态好处
////1.组织架构清晰
////2.可读性强
////3.利于前期后期的扩展和维护
//
//
////多态实现计算器
//void test02()
//{
//	//多态使用条件
//	//父类指针或者引用指向子类对象
//
//	//加法
//	AbstractCalculator * abc = new AddCalculator;//new创建在堆区 用完销毁
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult() << endl;
//	delete abc;//用完销毁
//
//	//减法
//	abc = new ReduceCalculator;//new创建在堆区 用完销毁
//	abc->m_Num1 = 15;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult() << endl;
//	delete abc;//用完销毁
//
//	//乘法
//	abc = new MulCalculator;//new创建在堆区 用完销毁
//	abc->m_Num1 = 8;
//	abc->m_Num2 = 6;
//	cout << abc->m_Num1 << "*" << abc->m_Num2 << "=" << abc->getResult() << endl;
//	delete abc;//用完销毁
//}
//
//void test01() {
//	//创建计算器对象
//	Calculator c;
//	c.m_Num1 = 10;
//	c.m_Num2 = 10;
//	cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult("+") << endl;
//}
//
//int main()
//{
//
//	//test01();
//	test02();
//
//	system("pause");
//
//	return 0;
//}