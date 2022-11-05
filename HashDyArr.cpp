#include "HashDyArr.h"

hashDyArr::hashDyArr(int s)
{
	size = s;
	arr = new employee[size];
	for (int i = 0; i<size; i++)
		arr[i].set_Name("");
	K = 0;
	count_elem = 0;
	count_collision = 0;
}

int hashDyArr::hashCode(employee N)
{
	int key = 0;
	for(int i = 0; i < N.get_Name().size(); i++)
	{
		switch (N.get_Name()[i])
		{	
		 	case 'A': key += 1; break;
			case 'a': key += 1; break;
			case 'B': key += 2; break;
			case 'b': key += 2; break;
			case 'C': key += 3; break;
			case 'c': key += 3; break;
			case 'D': key += 4; break;
			case 'd': key += 4; break;
			case 'E': key += 5; break;
			case 'e': key += 5; break;
			case 'F': key += 6; break;
			case 'f': key += 6; break;
			case 'G': key += 7; break;
			case 'g': key += 7; break;
			case 'H': key += 8; break;
			case 'h': key += 8; break;
			case 'I': key += 9; break;
			case 'i': key += 9; break;
			case 'J': key += 10; break;
			case 'j': key += 10; break;
			case 'K': key += 11; break;
			case 'k': key += 11; break;
			case 'L': key += 12; break;
			case 'l': key += 12; break;
			case 'M': key += 13; break;
			case 'm': key += 13; break;
			case 'N': key += 14; break;
			case 'n': key += 14; break;
			case 'O': key += 15; break;
			case 'o': key += 15; break;
			case 'P': key += 16; break;
			case 'p': key += 16; break;
			case 'Q': key += 17; break;
			case 'q': key += 17; break;
			case 'R': key += 18; break;
			case 'r': key += 18; break;
			case 'S': key += 19; break;
			case 's': key += 19; break;
			case 'T': key += 20; break;
			case 't': key += 20; break;
			case 'U': key += 21; break;
			case 'u': key += 21; break;
			case 'V': key += 22; break;
			case 'v': key += 22; break;
			case 'W': key += 23; break;
			case 'w': key += 23; break;
			case 'X': key += 24; break;
			case 'x': key += 24; break;
			case 'Y': key += 25; break;
			case 'y': key += 25; break;
			case 'Z': key += 26; break;
			case 'z': key += 26; break;
		}
	}
	key = key % size;
	return key;
}

void hashDyArr::insert(employee N)
{
	K = hashCode(N);
	if(count_elem >= size)
	{
		cout << "The array is full!" << endl;
		return;
	}
	else
	{
		if (arr[K].get_Name() != "")
			count_collision++;
		while(arr[K].get_Name() != "")
		{
			K++;
			K = K % size;
		}
		arr[K] = N;
		count_elem++;
	}
}

bool hashDyArr::search(employee N)
{
	K = hashCode(N);
	while(arr[K].get_Name() == "" || arr[K].get_Name() != N.get_Name())
	{
		K++;
		K = K % size;
	}
	if (arr[K].get_Name() == N.get_Name())
		return true;
	return false;
}

void hashDyArr::display()
{
	int c = 1;
	for(int i = 0; i<size; i++)
	{
		if (arr[i].get_Name() != "")
			cout << c++ << " Name : " << arr[i].get_Name() << endl << "Age : " << arr[i].get_Age() << endl << "Salary : " << arr[i].get_Salary() << endl << "Experience in years : " << arr[i].get_Exper() << endl << endl;
	}
}
void hashDyArr::remove(employee N)
{
	if (search(N))
	{
		K = hashCode(N);
		while(arr[K].get_Name() != N.get_Name())
		{
			K++;
			K = K % size;
		}
		arr[K].set_Name("");
		arr[K].set_Age(0);
		arr[K].set_Salary(0);
		arr[K].set_Exper(0);
		count_elem--;
	}
	else
		cout << "This employee does not exist!" << endl;
}
float hashDyArr::collision_rate()
{
	return (float) count_collision / count_elem * 100;
}
