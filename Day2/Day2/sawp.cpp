#include "swap.h"

void swap(int num1,int num2)
{
	cout << num1 << " " << num2 << endl;
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;

	cout << num1 << " " << num2 << endl;
}