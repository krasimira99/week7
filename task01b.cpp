#include "pch.h"
#include <iostream>
using namespace std;
const int SIZE = 100;
int main()
{
	int n = 0;
	int arr[SIZE];

	cout << "N=";
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}

	int min = arr[0];
	int max = arr[1];

	for (int i = 0; i < n; ++i)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i] < arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout << "Max = " << max << endl;
	cout <<	"Min = " << min << endl;
	cout << "Second Max = " << arr[n - 2] << endl;
	cout << "Second Min = " << arr[1] << endl;

	

}