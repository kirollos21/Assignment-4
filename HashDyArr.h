#ifndef HASHDYARR_H
#define HASHDYARR_H
#include "Employee.cpp"
#include <iostream>
using namespace std;

class hashDyArr
{
	private:
		employee *arr;
		int size;
		int K;
		int count_elem;
		int count_collision;
		int hashCode(employee);
	public:
		hashDyArr(int);
		void insert(employee);
		bool search(employee);
		void remove(employee);
		void display();
		float collision_rate();
};

#endif
