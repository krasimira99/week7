#include "stdafx.h"
#include<iostream>
using namespace std;
const int SIZER = 100;
const int SIZEC = 100;
int main()
{
	int n, m, arr[SIZER][SIZEC];
	cin >> n >> m;
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
			cout << arr[i][j] * arr[i][j]<<" ";
		}
		cout << endl;
	}
	
    return 0;
}

