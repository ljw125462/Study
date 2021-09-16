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
//		m_A = 10;//父类中公共权限成员 到子类中依然是公共权限
//		m_B = 10;//父类中的保护权限成员 到子类依然是保护权限
//		m_C = 10;//访问不到
//	}
//};
//
//
//void test01(){
//	Son1 s1;
//	s1.m_A = 100;
//	s1.m_B = 100;//到了Son1中m_B是保护权限  类外访问不到
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
//		m_A = 100;//父类中公共权限成员 到子类中变为保护权限
//		m_B = 100; //父类中保护权限成员 到子类中依然是保护权限
//		m_C = 100;//父类私有权限 子类访问不到
//	}
//};
//
//void test02() {
//	Son2 s2;
//	s2.m_A = 1000;//保护权限 类外访问不到
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
//		m_A = 100;//父类中公共权限成员 到子类中变为私有权限
//		m_B = 100;//父类中保护权限成员 到子类中变为私有权限
//		m_C = 100;
//	}
//};
//
//class GrandSon3 :public Son3
//{
//	void func() {
//		m_A = 1000;//Son3中m_A变为私有
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