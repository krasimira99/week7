#include "pch.h"
#include <iostream>
using namespace std;
const int ROWS = 100;
const int COLS = 100;
int main()
{
	int n, m, arr[ROWS][COLS];
	cout << "Enter number of rows: ";
	cin >> n;
	cout << "Enter number of columns: ";
	cin >> m;
	if (n!=m)
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
			if (i == j)
			{
				cout << arr[i][j];
			}
		}
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i+j==n-1)
			{
				cout << arr[i][j];
			}
		}
	}
	
	return 0;
}

