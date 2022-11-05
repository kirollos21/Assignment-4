#include "employee.h"

employee::employee()
{
	Name = "";
	Age = 0;
	Salary = 0;
	Experience = 0;
}
employee::employee(string n, int a, int s, int e)
{
	Name = n;
	Age = a;
	Salary = s;
	Experience = e;
}
void employee::set_Name(string n)
{
	Name = n;
}
void employee::set_Age(int a)
{
	Age = a;
}
void employee::set_Salary(int s)
{
	Salary = s;
}
void employee::set_Exper(int e)
{
	Experience = e;
}
string employee::get_Name()
{
	return Name;
}
int employee::get_Age()
{
	return Age;
}
int employee::get_Salary()
{
	return Salary;
}
int employee::get_Exper()
{
	return Experience;
}
