//#include <iostream>
//using namespace std;
//
//class AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil() = 0;
//
//	//����
//	virtual void Brew() = 0;
//
//	//���뱭��
//	virtual void BourInCup() = 0;
//
//	//��������
//	virtual void PutSomething() = 0;
//
//	//������Ʒ
//	void makeDrink() {
//		Boil();
//		Brew();
//		BourInCup();
//		PutSomething();
//	}
//};
//
////��������
//class Coffee :public AbstractDrinking
//{
//public:
//	virtual void Boil()
//	{
//		cout << "��ɽȪ" << endl;
//	}
//
//	//����
//	virtual void Brew()
//	{
//		cout << "����" << endl;
//	}
//
//	//���뱭��
//	virtual void BourInCup()
//	{
//		cout << "���뱭��" << endl;
//	}
//
//	//��������
//	virtual void PutSomething()
//	{
//		cout << "�����ǻ�ţ��" << endl;
//	}
//};
//
//class Tea :public AbstractDrinking
//{
//public:
//	virtual void Boil()
//	{
//		cout << "���Ȫˮ" << endl;
//	}
//
//	//����
//	virtual void Brew()
//	{
//		cout << "���ݲ�" << endl;
//	}
//
//	//���뱭��
//	virtual void BourInCup()
//	{
//		cout << "����豭��" << endl;
//	}
//
//	//��������
//	virtual void PutSomething()
//	{
//		cout << "������轵ȸ���" << endl;
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