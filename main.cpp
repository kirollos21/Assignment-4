#include <iostream>
#include <fstream>
#include "HashDyArr.cpp"
#include "HashLinkedList.cpp"
using namespace std;

main()
{
	employee e;
	string n;
	int x;
	hashDyArr DyArr(9);
	hashLinkedList LinkedList(9);
	ifstream R("employees.txt");
	while (! R.eof())
	{
		R>>n;
		e.set_Name(n);
		R>>x;
		e.set_Age(x);
		R>>x;
		e.set_Salary(x);
		R>>x;
		e.set_Exper(x);
		DyArr.insert(e);
		LinkedList.insert(e);
	};
	R.close();
	DyArr.display();
	cout << "-----------------------------------------------------------------------------------------" << endl;
	LinkedList.display();
	cout << "-----------------------------------------------------------------------------------------" << endl;
	cout << "The collision rates of linear probing = " << DyArr.collision_rate() << "%" << endl;
	cout << "The collision rates of separate chaining = " << LinkedList.collision_rate() << "%" << endl;
}
