#include "stdafx.h"
#include<iostream>
using namespace std;
const int ROWS = 100;
const int COLS = 100;
int main()
{
	int n, m, arr[ROWS][COLS],sumUnder=0,sumOver=0;
	cout << "Number of rows:";
	cin >> n;
	cout << "Number of columns:";
	cin >> m;
	if (n != m)
	{
		cout << "False" << endl;
		return 0;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i > j)
			{
				sumUnder += arr[i][j];
			}
			if (i < j)
			{
				sumOver += arr[i][j];
			}
		}
	}
	cout << "Sum under diagonal:" << sumUnder << endl;
	cout << "Sum over diagonal:" << sumOver << endl;

    return 0;
}

