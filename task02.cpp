#include "pch.h"
#include <iostream>
using namespace std;
const int SIZE = 100;
int main()
{
	int n, arr[SIZE],m,counter=0;
	cout << "n=";
	cin >> n;
	if (n<=0)
	{
		cout << "False" << endl;
		return 0;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			cout << "arr[" << i << "]=";
			cin >> arr[i];
		}
		cout << "m=";
		cin >> m;
		for (int i = 0; i < n; i++)
		{
			if (arr[i] == m)
			{
				counter++;
			}
		}
		cout << "Yes" << " " << counter << " times" << endl;
	}
	return 0;
}
