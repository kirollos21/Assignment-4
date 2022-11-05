#ifndef HASHLINKEDLIST_H
#define HASHLINKEDLIST_H
#include "Employee.h"
#include <iostream>
#include <list>
#include <iterator>
using namespace std;

class hashLinkedList
{
	private:
		list<employee> *LL;
		int size;
		int K;
		int count_elem;
		int count_collision;
		int hashCode(employee);
	public:
		hashLinkedList(int);
		void insert(employee);
		bool search(employee);
		void remove(employee);
		void display();
		float collision_rate();
};

#endif
