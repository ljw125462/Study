//#include <iostream>
//using namespace std;
//class Base1
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son1 :public Base1
//{
//public:
//
//	void func() {
//		m_A = 10;//�����й���Ȩ�޳�Ա ����������Ȼ�ǹ���Ȩ��
//		m_B = 10;//�����еı���Ȩ�޳�Ա ��������Ȼ�Ǳ���Ȩ��
//		m_C = 10;//���ʲ���
//	}
//};
//
//
//void test01(){
//	Son1 s1;
//	s1.m_A = 100;
//	s1.m_B = 100;//����Son1��m_B�Ǳ���Ȩ��  ������ʲ���
//}
//
//class Base2
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son2 :protected Base2
//{
//	void func() {
//		m_A = 100;//�����й���Ȩ�޳�Ա �������б�Ϊ����Ȩ��
//		m_B = 100; //�����б���Ȩ�޳�Ա ����������Ȼ�Ǳ���Ȩ��
//		m_C = 100;//����˽��Ȩ�� ������ʲ���
//	}
//};
//
//void test02() {
//	Son2 s2;
//	s2.m_A = 1000;//����Ȩ�� ������ʲ���
//	s2.m_B = 1000;
//}
//
//class Base3
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son3 :private Base3
//{
//public:
//	void func(){
//		m_A = 100;//�����й���Ȩ�޳�Ա �������б�Ϊ˽��Ȩ��
//		m_B = 100;//�����б���Ȩ�޳�Ա �������б�Ϊ˽��Ȩ��
//		m_C = 100;
//	}
//};
//
//class GrandSon3 :public Son3
//{
//	void func() {
//		m_A = 1000;//Son3��m_A��Ϊ˽��
//	}
//};
//
//void test03() {
//
//}
//
//int main()
//{
//
//
//
//	system("pause");
//
//	return 0;
//}