#include <iostream>
using namespace std;

// Shkruaj nj� program C++ p�r t� gjetur shfaqjen e par� t� nj� karakteri n� nj� varg t� caktuar.

int main()
{
	char arr[100];
	cin.getline(arr, 100);
	char target;
	cin >> target;
	
	for (int i = 0; arr[i] != '\0'; i++)
	{
		if (target == arr[i])
		{
			cout << "Target char is in pos " << i;
			return 0;
		}
	}

	cout << "Target is not in array";
	return 0;
}