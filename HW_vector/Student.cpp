#include "Student.h"

Student::Student()
{
	name = "NULL";
	secName = "NULL";
	course = 0;
}

Student::Student(string N, string SN, int C)
{
	name = N;
	secName = SN;
	course = C; 
}


ostream& operator<<(ostream& os, const Student& s)
{
	os << left << setw(8) << s.name <<
		left << setw(10) << s.secName <<
		left << setw(5) << s.course << endl;
		return os;
}

void Init()
{
	vector<Student>StVec;
	Student st1("Фёдор", "Казаков", 2);
	Student st2("Даниил", "Никулин", 3);
	Student st3("Роман", "Фокин", 1);
	Student st4("Софья", "Кошелева", 4);
	Student st5("Полина", "Кузнецов", 2);

	StVec.push_back(st1);
	StVec.push_back(st2);
	StVec.push_back(st3);
	StVec.push_back(st4);
	StVec.push_back(st5);

	for (int i = 0; i < StVec.size(); i++)
	{
		cout <<  StVec[i];
	}

}

void SortN(vector<Student> stv)
{
}

void SortSN(vector<Student> stv)
{
}


