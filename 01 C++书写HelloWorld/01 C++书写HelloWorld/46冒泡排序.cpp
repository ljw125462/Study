#include<iostream>
using namespace std;
int main()
{
	int arr[10] = { 10,5,86,92,54,26,38,64,27,14 };
	int i;
	int j;
	int temp;
	for (i = 0; i < 10-1; i++) {
		for (j = 0; j < 10 - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < 10; i++) {
		cout << arr[i] << endl;
	}

	system("pause");

	return 0;
}