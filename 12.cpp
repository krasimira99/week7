#include "stdafx.h"
#include<iostream>
using namespace std;
const int ROWS = 100;
const int COLS = 100;
int main()
{
	int n, m, arr[ROWS][COLS];
	cout << "Number of rows:";
		cin >> n;
	cout << "Number of columns:";
		cin >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	int max = arr[0][0];
	int maxi = 0;
	int maxj = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j]>max)
			{
				max=arr[i][j];
				maxi = i+1;
				maxj = j+1;
			}
		}
		
	}
	cout << "Largest sum row:" << maxi << endl;
	cout << "Largest sum column:" << maxj << endl;
	cout << endl;

    return 0;
}

