#include <iostream>
using namespace std;

// Shkruaj nj� program C++ p�r t� fshire t� gjitha paraqitjet e nj� karakteri nga vargu.

void del_char(char arr[], int position) {
	for (int i = position; arr[i] != '\0'; i++)
	{
		arr[i] = arr[i + 1];
	}
}

int main()
{
	char arr[100];
	cin.getline(arr, 100);
	char target;
	cin >> target;

	for (int i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i] == target)
		{
			del_char(arr, i);
		}
	}
	cout << arr;
	return 0;
}