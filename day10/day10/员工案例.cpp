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
		worker.m_name = "Ա��";
		worker.m_name += nameSeed[i];

		worker.m_Salary = rand() % 16000+4000;
		//��Ա�����뵽������
		v.push_back(worker);
	}
}

//����
void setGroup(vector<Worker>&v,multimap<int,Worker>&m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		//����������ű��
		int deptId = rand() % 3;//����0~2�������
		//��Ա�����뵽������,keyΪ���ű�ţ�valueΪ����Ա��
		m.insert(make_pair(deptId,*it));
	}
}

//������ʾԱ��
void showWorkerByGroup(multimap<int,Worker>&m)
{
	cout << "�߻����ţ�" << endl;
	multimap<int,Worker>::iterator pos = m.find(CEHUA);
	int count = m.count(CEHUA);//ͳ�ƾ�������
	int index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "������" << pos->second.m_name << " ���ʣ�" << pos->second.m_Salary << endl;
	}

	cout << "-------------------------" << endl;
	cout << "�������ţ�" << endl;
	pos = m.find(MEISHU);
	count = m.count(MEISHU);//ͳ�ƾ�������
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "������" << pos->second.m_name << " ���ʣ�" << pos->second.m_Salary << endl;
	}

	cout << "-------------------------" << endl;
	cout << "�з����ţ�" << endl;
	pos = m.find(YANFA);
	count = m.count(YANFA);//ͳ�ƾ�������
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++)
	{
		cout << "������" << pos->second.m_name << " ���ʣ�" << pos->second.m_Salary << endl;
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	vector<Worker>vWorker;
	createWorker(vWorker);

	//����
	multimap<int, Worker>mWorker;
	setGroup(vWorker,mWorker);

	//������ʾԱ��
	showWorkerByGroup(mWorker);

	//����
	/*for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++)
	{
		cout << "������" << it->m_name << " н�ʣ�" << it->m_Salary << endl;
	}*/
	system("pause");
	return 0;
}