#include<iostream>
#include<Windows.h>
#include<vector>
#include<iomanip>
#include "Ex2.h"
using namespace std;

void MultiplicationTable()
{
	vector<vector<int>>DubV(10, vector<int>(10));

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			DubV[i][j] = i * j;
		}
	}
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			cout << setw(3) << DubV[i][j] << " ";
		}
		cout << endl;
	}
	
}
