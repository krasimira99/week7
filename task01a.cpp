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
	cout << "Max=" << max << endl;
	cout << "Min=" << min << endl;
	return 0;

    
}

