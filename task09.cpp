#include "pch.h"
#include <iostream>
using namespace std;
const int ROWS = 4;
const int COLS = 4;
int main()
{
	int arr[ROWS][COLS] = { {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16} };
	double sum = 0;
	double avr = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	avr = sum / (ROWS*COLS);
	cout << "The sum is:" << sum << endl;
	cout << "The average is:" << avr << endl;
	return 0;
}


