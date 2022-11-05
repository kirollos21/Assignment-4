#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>
using namespace std;

class employee
{
	private:
		string Name;
		int Age;
		int Salary;
		int Experience;
	public:
		employee();
		employee(string, int, int, int);
		void set_Name(string);
		void set_Age(int);
		void set_Salary(int);
		void set_Exper(int);
		string get_Name();
		int get_Age();
		int get_Salary();
		int get_Exper();
};
#endif
