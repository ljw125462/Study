#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<string>
#include<ctime>

#define CEHUA 0
#define MEISHU 1
#define YANFA 2

class Worker
{
public:
	string m_name;
	int m_Salary;
};

void createWorker(vector<Worker>&v)
{
	string nameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		Worker worker;
		worker.m_name = "员工";
		worker.m_name += nameSeed[i];

		worker.m_Salary = rand() % 16000+4000;
		//将员工放入到容器里
		v.push_back(worker);
	}
}

//分组
void setGroup(vector<Worker>&v,multimap<int,Worker>&m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		//产生随机部门编号
		int deptId = rand() % 3;//产生0~2随机整数
		//将员工插入到分组中,key为部门编号，value为具体员工
		m.insert(make_pair(deptId,*it));
	}
}

//分组显示员工
void showWorkerByGroup(multimap<int,Worker>&m)
{
	cout << "策划部门：" << endl;
	multimap<int,Worker>::iterator pos = m.find(CEHUA);
	int count = m.count(CEHUA);//统计具体人数
	int index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名：" << pos->second.m_name << " 工资：" << pos->second.m_Salary << endl;
	}

	cout << "-------------------------" << endl;
	cout << "美术部门：" << endl;
	pos = m.find(MEISHU);
	count = m.count(MEISHU);//统计具体人数
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名：" << pos->second.m_name << " 工资：" << pos->second.m_Salary << endl;
	}

	cout << "-------------------------" << endl;
	cout << "研发部门：" << endl;
	pos = m.find(YANFA);
	count = m.count(YANFA);//统计具体人数
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "姓名：" << pos->second.m_name << " 工资：" << pos->second.m_Salary << endl;
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	vector<Worker>vWorker;
	createWorker(vWorker);

	//分组
	multimap<int, Worker>mWorker;
	setGroup(vWorker,mWorker);

	//分组显示员工
	showWorkerByGroup(mWorker);

	//测试
	/*for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++)
	{
		cout << "姓名：" << it->m_name << " 薪资：" << it->m_Salary << endl;
	}*/
	system("pause");
	return 0;
}