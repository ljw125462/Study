//#include<iostream>
//using namespace std;
//#include<map>
//
//void printMap(map<int, int>&m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key=" << it->first << " value=" << it->second << endl;
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	map<int, int>m;
//	//1.
//	m.insert(pair<int, int>(1, 10));
//	m.insert(pair<int, int>(3, 30));
//	printMap(m);
//	//2.
//	m.insert(make_pair(5, 50));
//	printMap(m);
//	//3.
//	m.insert(map<int, int>::value_type(6, 60));
//	printMap(m);
//	//4.
//	m[7] = 70;//[]不建议去插入  可以利用key访问到value
//	printMap(m);
//	//删除
//	m.erase(m.begin());
//	printMap(m);
//	//按照key删除
//	m.erase(5);
//	printMap(m);
//
//	m.erase(m.begin(),m.end());
//	printMap(m);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}