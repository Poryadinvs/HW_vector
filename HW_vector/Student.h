#include<iostream>
#include<Windows.h>
#include<vector>
#include<iomanip>
using namespace std;

class Student
{
	string name;
	string secName;
	int course;
public: 
	Student();
	Student(string N, string SN, int C);

	friend ostream& operator << (ostream& os, const Student& s);
};

void Init();
void SortN(vector<Student>stv);
void SortSN(vector<Student>stv);

