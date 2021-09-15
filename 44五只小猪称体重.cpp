#include<iostream>
using namespace std;
int main44()
{
	int arr[5] = { 300, 350, 200, 400, 25 };
	int max = 0;
	int i;
	for (i = 0; i < 5; i++) {
		if (arr[i] > max) { max = arr[i];}
	}
	cout <<max<< endl;

	system("pause");

	return 0;
}