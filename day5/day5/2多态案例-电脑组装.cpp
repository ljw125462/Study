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
////电脑类
//class Computer
//{
//public:
//	Computer(CPU * cpu, VideoCard * vc, Memory * mem)
//	{
//		m_cpu = cpu;
//		m_vc = vc;
//		m_mem = mem;
//	}
//	//工作函数
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
//	CPU * m_cpu;//CPU的零件指针
//	VideoCard * m_vc;//显卡零件指针
//	Memory * m_mem;//内存条零件指针
//};
//
////inter厂商
//class InterCPU :public CPU
//{
//public:
//	virtual void calculate() {
//		cout << "inter的CPU开始计算了。" << endl;
//	}
//};
//
//class InterVideoCard :public VideoCard
//{
//public:
//	virtual void display() {
//		cout << "inter的显卡开始显示了。" << endl;
//	}
//};
//
//class InterMemory :public Memory
//{
//public:
//	virtual void storage() {
//		cout << "inter的内存条开始存储了。" << endl;
//	}
//};
//
////Lenovo厂商
//class LenovoCPU :public CPU
//{
//public:
//	virtual void calculate() {
//		cout << "Lenovo的CPU开始计算了。" << endl;
//	}
//};
//
//class LenovoVideoCard :public VideoCard
//{
//public:
//	virtual void display() {
//		cout << "Lenovo的显卡开始显示了。" << endl;
//	}
//};
//
//class LenovoMemory :public Memory
//{
//public:
//	virtual void storage() {
//		cout << "Lenovo的内存条开始存储了。" << endl;
//	}
//};
//
//void test01()
//{
//	//第一台电脑零件
//	CPU * interCPU = new InterCPU;
//	VideoCard * interCard = new InterVideoCard;
//	Memory * interMemory = new InterMemory;
//
//	//创建第一台电脑
//	cout << "第一台电脑" << endl;
//	Computer * computer1 = new Computer(interCPU, interCard, interMemory);
//	computer1->work();
//	delete computer1;
//
//	//组装第二台电脑
//	cout << "------------------------" << endl;
//	cout << "第二台电脑" << endl;
//	Computer * computer2 = new Computer(new LenovoCPU,new LenovoVideoCard,new LenovoMemory);
//	computer2->work();
//	delete computer2;
//
//	//组装第三台电脑
//	cout << "------------------------" << endl;
//	cout << "第三台电脑" << endl;
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