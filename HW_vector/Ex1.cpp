#include<iostream>
#include<Windows.h>
#include<vector>
#include "Ex1.h"

void sqrOf_int()
{
	vector<int>vec(10);

	for (int i = 0; i < vec.size(); i++)
	{
		vec[i] = i * i;
		cout << vec[i] << " " ;
	}
	cout << endl;
}
