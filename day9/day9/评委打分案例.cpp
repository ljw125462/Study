//#include <iostream>
//using namespace std;
//#include<vector>
//#include<string>
//#include<deque>
//#include<algorithm>
//#include<ctime>
//
////ѡ����
//class Person
//{
//public:
//	Person(string name,int score)
//	{
//		this->m_name = name;
//		this->m_score = score;
//	}
//	
//	string m_name;
//	int m_score;
//};
//
//void createPerson(vector<Person>&v)
//{
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < 5; i++)
//	{
//		string name = "";
//		name += nameSeed[i];
//
//		int score = 0;
//		Person p(name,score);
//		v.push_back(p);//��������person����  ���뵽������
//	}
//}
//
////���
//void setScore(vector<Person>&v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//����ί�������뵽deque������
//		deque<int>d;
//		for (int i = 0; i < 10; i++)
//		{
//			int score = rand() % 41 + 60;  //60~100
//			d.push_back(score);
//		}
//		//cout << "ѡ�֣�" << it->m_name << " ������" << endl;
//		//for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
//		//{
//		//	cout << *dit << " ";
//		//}
//		//cout << endl;
//		
//		//������
//		sort(d.begin(), d.end());
//
//		//ȥ����߷ֺ���ͷ�
//		d.pop_back();
//		d.pop_front();
//
//		//ȡƽ����
//		int sum = 0;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
//		{
//			sum += *dit;//�ۼ��ܷ�
//		}
//
//		int avg = sum / d.size();
//
//		//��ƽ���ָ�ֵ��ÿ��ѡ��
//		it->m_score = avg;
//	}
//}
//
////��ʾ���շ���
//void showScore(vector<Person>&v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout <<"ѡ�֣�"<< it->m_name << " ���յ÷֣�" << it->m_score << endl;
//	}
//}
//
//int main()
//{
//	//���������
//
//	srand((unsigned int)time(NULL)); 
//	
//	
//	//1.��������ѡ��
//	vector<Person>v;
//	createPerson(v);
//
//	//����
//	/*for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "������" << (*it).m_name << " ����"<<(*it).m_score<< endl;
//	}
//*/
//	//2.������ѡ�ִ��
//	setScore(v);
//
//	//3.��ʾ������
//	showScore(v);
//
//	system("pause");
//	return 0;
//}