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
//	//��Ϊ
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
//	//����
//
//	//���ó�Ա�������ж������������Ƿ����
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
//	cout << "c1�����Ϊ��" <<c1.calculateS()<< endl;
//	cout << "c1�����Ϊ��" << c1.calculateV() << endl;
//
//
//	bool ret = isSame(c1, c2);
//	if (ret) {
//		cout << "c1��c2����ȵ�" << endl;
//	}
//	else
//	{
//		cout << "c1��c2�ǲ���ȵ�" << endl;
//	}
//
//	ret = c1.isSameByClass(c2);
//	if (ret) {
//		cout << "�ڳ�Ա�����У�c1��c2����ȵ�" << endl;
//	}
//	else
//	{
//		cout << "�ڳ�Ա�����У�c1��c2�ǲ���ȵ�" << endl;
//	}
//
//	system("pause");
//
//	return 0;
//}