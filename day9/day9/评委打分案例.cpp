//#include <iostream>
//using namespace std;
//#include<vector>
//#include<string>
//#include<deque>
//#include<algorithm>
//#include<ctime>
//
////选手类
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
//		v.push_back(p);//将创建的person对象  放入到容器中
//	}
//}
//
////打分
//void setScore(vector<Person>&v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//将评委分数放入到deque容器中
//		deque<int>d;
//		for (int i = 0; i < 10; i++)
//		{
//			int score = rand() % 41 + 60;  //60~100
//			d.push_back(score);
//		}
//		//cout << "选手：" << it->m_name << " 分数：" << endl;
//		//for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
//		//{
//		//	cout << *dit << " ";
//		//}
//		//cout << endl;
//		
//		//先排序
//		sort(d.begin(), d.end());
//
//		//去除最高分和最低分
//		d.pop_back();
//		d.pop_front();
//
//		//取平均分
//		int sum = 0;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
//		{
//			sum += *dit;//累加总分
//		}
//
//		int avg = sum / d.size();
//
//		//将平均分赋值到每个选手
//		it->m_score = avg;
//	}
//}
//
////显示最终分数
//void showScore(vector<Person>&v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout <<"选手："<< it->m_name << " 最终得分：" << it->m_score << endl;
//	}
//}
//
//int main()
//{
//	//随机数种子
//
//	srand((unsigned int)time(NULL)); 
//	
//	
//	//1.创建五名选手
//	vector<Person>v;
//	createPerson(v);
//
//	//测试
//	/*for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "姓名：" << (*it).m_name << " 分数"<<(*it).m_score<< endl;
//	}
//*/
//	//2.给五名选手打分
//	setScore(v);
//
//	//3.显示最后分数
//	showScore(v);
//
//	system("pause");
//	return 0;
//}