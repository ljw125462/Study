//#include <iostream>
//using namespace std;
//
//class CPU
//{
//public:
//	virtual void calculate() = 0;
//};
//
//class VideoCard
//{
//public:
//	virtual void display() = 0;
//};
//
//class Memory
//{
//public:
//	virtual void storage() = 0;
//};
//
////������
//class Computer
//{
//public:
//	Computer(CPU * cpu, VideoCard * vc, Memory * mem)
//	{
//		m_cpu = cpu;
//		m_vc = vc;
//		m_mem = mem;
//	}
//	//��������
//	void work()
//	{
//		m_cpu->calculate();
//		m_vc->display();
//		m_mem->storage();
//	}
//	~Computer()
//	{
//		if (m_cpu!=NULL) {
//			delete m_cpu;
//			m_cpu = NULL;
//		}
//		if (m_vc != NULL) {
//			delete m_vc;
//			m_vc = NULL;
//		}
//		if (m_mem != NULL) {
//			delete m_mem;
//			m_mem = NULL;
//		}
//	}
//private:
//	CPU * m_cpu;//CPU�����ָ��
//	VideoCard * m_vc;//�Կ����ָ��
//	Memory * m_mem;//�ڴ������ָ��
//};
//
////inter����
//class InterCPU :public CPU
//{
//public:
//	virtual void calculate() {
//		cout << "inter��CPU��ʼ�����ˡ�" << endl;
//	}
//};
//
//class InterVideoCard :public VideoCard
//{
//public:
//	virtual void display() {
//		cout << "inter���Կ���ʼ��ʾ�ˡ�" << endl;
//	}
//};
//
//class InterMemory :public Memory
//{
//public:
//	virtual void storage() {
//		cout << "inter���ڴ�����ʼ�洢�ˡ�" << endl;
//	}
//};
//
////Lenovo����
//class LenovoCPU :public CPU
//{
//public:
//	virtual void calculate() {
//		cout << "Lenovo��CPU��ʼ�����ˡ�" << endl;
//	}
//};
//
//class LenovoVideoCard :public VideoCard
//{
//public:
//	virtual void display() {
//		cout << "Lenovo���Կ���ʼ��ʾ�ˡ�" << endl;
//	}
//};
//
//class LenovoMemory :public Memory
//{
//public:
//	virtual void storage() {
//		cout << "Lenovo���ڴ�����ʼ�洢�ˡ�" << endl;
//	}
//};
//
//void test01()
//{
//	//��һ̨�������
//	CPU * interCPU = new InterCPU;
//	VideoCard * interCard = new InterVideoCard;
//	Memory * interMemory = new InterMemory;
//
//	//������һ̨����
//	cout << "��һ̨����" << endl;
//	Computer * computer1 = new Computer(interCPU, interCard, interMemory);
//	computer1->work();
//	delete computer1;
//
//	//��װ�ڶ�̨����
//	cout << "------------------------" << endl;
//	cout << "�ڶ�̨����" << endl;
//	Computer * computer2 = new Computer(new LenovoCPU,new LenovoVideoCard,new LenovoMemory);
//	computer2->work();
//	delete computer2;
//
//	//��װ����̨����
//	cout << "------------------------" << endl;
//	cout << "����̨����" << endl;
//	Computer * computer3 = new Computer(new InterCPU, new LenovoVideoCard, new InterMemory);
//	computer3->work();
//	delete computer3;
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