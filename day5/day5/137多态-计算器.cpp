//#include <iostream>
//using namespace std;
////��ͨд��
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
////�ӷ���������
//class AddCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
////������������
//class ReduceCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
////�˷���������
//class MulCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 * m_Num2;
//	}
//};
//
////��̬�ô�
////1.��֯�ܹ�����
////2.�ɶ���ǿ
////3.����ǰ�ں��ڵ���չ��ά��
//
//
////��̬ʵ�ּ�����
//void test02()
//{
//	//��̬ʹ������
//	//����ָ���������ָ���������
//
//	//�ӷ�
//	AbstractCalculator * abc = new AddCalculator;//new�����ڶ��� ��������
//	abc->m_Num1 = 10;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << "+" << abc->m_Num2 << "=" << abc->getResult() << endl;
//	delete abc;//��������
//
//	//����
//	abc = new ReduceCalculator;//new�����ڶ��� ��������
//	abc->m_Num1 = 15;
//	abc->m_Num2 = 10;
//	cout << abc->m_Num1 << "-" << abc->m_Num2 << "=" << abc->getResult() << endl;
//	delete abc;//��������
//
//	//�˷�
//	abc = new MulCalculator;//new�����ڶ��� ��������
//	abc->m_Num1 = 8;
//	abc->m_Num2 = 6;
//	cout << abc->m_Num1 << "*" << abc->m_Num2 << "=" << abc->getResult() << endl;
//	delete abc;//��������
//}
//
//void test01() {
//	//��������������
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