#include <iostream>
using namespace std;

// Shkruaj nj� program C++ p�r t� gjetur anasjelltas t� nj� vargu. (assuming it means inverse of a string.)

int main()
{
    char arr[100];
    cin.getline(arr, 100);

	for (int i = strlen(arr); i >= 0; i--)
	{
		cout << arr[i];
	}
	return 0;
}