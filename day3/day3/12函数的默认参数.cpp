//#include <iostream>
//using namespace std;
//
////������Ĭ�ϲ���
//int func(int a, int b = 20, int c = 30) {
//	return a + b + c;
//}
//
//	//ע������  1.���ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����󣬴����ұ�����Ĭ��ֵ
//	//int func(int a, int b = 20, int c)   ����
//	//int func(int a, int b = 20, int c = 30) ��ȷ
//	//int func(int a, int b = 20, int c = 30,int d =10)  ��ȷ 
//	//int func(int a, int b = 20, int c ,int d =10)  ����
//
//	//ע������  2.�����������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ���
//	//������ʵ��ֻ����һ��Ĭ�ϲ���
//int func2(int a = 10, int b = 6);
//int func2(int a, int b) {
//	return a + b;
//}
//int main()
//{
//	//����Լ��������ݣ������Լ������ݣ����û�У�����Ĭ��ֵ��
//	//�﷨������ֵ���� ���������β�=Ĭ��ֵ��{}
//	cout << func(5,15,15) << endl;
//	cout << func2() << endl;
//
//	system("pause");
//
//	return 0;
//}