//#include <iostream>
//using namespace std;
//
////class Cube
////{
////public:
////	int m_L;
////	int m_W;
////	int m_H;
////	int mianji(int s) {
////		s = (m_L*m_W + m_L * m_H + m_H * m_W) * 2;
////		return s;
////	}
////	int tiji(int v) {
////		v = m_L * m_W*m_H;
////		return v;
////	}
////	;
////};
//class Cube
//{
//	//行为
//public:
//	void setL(int L) {
//		m_L = L;
//	}
//	int getL() {
//		return m_L;
//	}
//	void setW(int W) {
//		m_W = W;
//	}
//	int getW() {
//		return m_W;
//	}
//	void setH(int H) {
//		m_H = H;
//	}
//	int getH() {
//		return m_H;
//	}
//	int calculateS()
//	{
//		return 2 * (m_L*m_W + m_L * m_H + m_H * m_W);
//	}
//	int calculateV()
//	{
//		return m_L * m_H*m_W;
//	}
//	//属性
//
//	//利用成员函数来判断两个立方体是否相等
//	bool isSameByClass(Cube &c)
//	{
//		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
//		{
//			return true;
//		}
//		return false;
//	}
//private:
//	int m_L;
//	int m_W;
//	int m_H;
//	
//};
//
//bool isSame(Cube &c1,Cube &c2)
//{
//	if (c1.getL() == c2.getL()&&c1.getW() == c2.getW()&&c1.getH() == c2.getH())
//	{
//		return true;
//	}
//	return false;
//}
//
//int main()
//{
//	/*Cube c1;
//	Cube c2;
//	c1.m_L = 10;
//	c1.m_H = 6;
//	c1.m_W = 8;
//	c2.m_L = 4;
//	c2.m_H = 12;
//	c2.m_W = 2;
//	if (c1.mianji() == c2.mianji() && c1.tiji() == c2.tiji()) {
//
//	}*/
//
//	Cube c1;
//	c1.setL(10);
//	c1.setW(10);
//	c1.setH(10);
//
//	Cube c2;
//	c2.setL(10);
//	c2.setW(10);
//	c2.setH(10);
//
//	cout << "c1的面积为：" <<c1.calculateS()<< endl;
//	cout << "c1的体积为：" << c1.calculateV() << endl;
//
//
//	bool ret = isSame(c1, c2);
//	if (ret) {
//		cout << "c1和c2是相等的" << endl;
//	}
//	else
//	{
//		cout << "c1和c2是不相等的" << endl;
//	}
//
//	ret = c1.isSameByClass(c2);
//	if (ret) {
//		cout << "在成员函数中，c1和c2是相等的" << endl;
//	}
//	else
//	{
//		cout << "在成员函数中，c1和c2是不相等的" << endl;
//	}
//
//	system("pause");
//
//	return 0;
//}