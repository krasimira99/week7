#include "pch.h"
#include <iostream>
using namespace std;
const int ROWS = 6;
const int COLS = 5;
int main()
{
	int arr[ROWS][COLS] = { {48,72,13,14,15},{21,22,53,24,75},{31,57,33,34,35},{41,95,43,44,45},{56,52,53,54,55},{61,69,63,64,65} };
	int min = arr[0][0];
	int max = arr[0][1];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j]>max)
			{
				max=arr[i][j];
			}
			if (arr[i][j]<min)
			{
				min=arr[i][j];
			}
		}
	}
	cout << "The largest number is:" << max << endl;
	cout << "The smallest number is:" << min << endl;
	return 0;
}
