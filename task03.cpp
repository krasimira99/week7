#include "pch.h"
#include <iostream>
#include<cmath>
using namespace std;
const int SIZE = 100;
int main()
{
	int n, arr[SIZE], sum = 0, k;
	float avr = 1, min;
	cout << "Enter size of array: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "arr[" << i << "]=";
		cin >> arr[i];
		sum += arr[i];
	}
	avr = sum / n;
	min = fabs(arr[n - 1] - avr);
	for (int i = 0; i < n; i++)
	{
		if (fabs(arr[i] - avr) < min)
		{
			min = fabs(arr[i] - avr);
			k = i;
		}
	}
	cout << arr[k];
	int arr2[SIZE], arr3[SIZE]; //arr2 must contain the numbers smaller than the average; arr3 must contain the larger numbers
	int size2 = 0, size3 = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i]<min)
		{
			arr2[size2] = arr[i];
			size2++;
		}
		if (arr[i]>min)
		{
			arr3[size3] = arr[i];
			size3++;
		}
	}
	for (int i = 0; i < size2; i++)
	{
		cout << arr2[i];
	}
	cout << endl;
	for (int i = 0; i < size3; i++)
	{
		cout << arr3[i];
	}
	cout << endl;
	return 0;
}


