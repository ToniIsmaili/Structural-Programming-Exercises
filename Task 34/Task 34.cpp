#include <iostream>
using namespace std;

// Shkruaj nj� program C++ p�r t� gjetur shfaqjen e fundit t� nj� karakteri n� nj� varg t� caktuar.

int main()
{
	char arr[100];
	cin.getline(arr, 100);
	char target;
	cin >> target;

	for (int i = strlen(arr); i >= 0; i--)
	{
		if (target == arr[i])
		{
			cout << "Target is at positon " << i;
			return 0;
		}
	}
	cout << "Target isnt in array";
	return 0;
}