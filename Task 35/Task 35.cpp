#include <iostream>
using namespace std;

// Shkruaj nj� program C++ p�r t� k�rkuar t� gjitha paraqitjet e nj� karakteri n� vargun e dh�n�.

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
			cout << "Target is at position " << i << endl;
		}
	}
	return 0;
}