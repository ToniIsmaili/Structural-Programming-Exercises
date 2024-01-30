#include <iostream>
using namespace std;

// Write a C++ program to print all unique elements in the array.

int main()
{
	const int size = 10;
	int arr[size] = { 1, 2, 3, 4, 1, 2, 7, 8, 9, 10 };

	bool isUnique = true;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i == j)
			{
				continue;
			}

			if (arr[i] == arr[j])
			{
				isUnique = false;
			}
		}
		if (isUnique)
		{
			cout << "Element in position " << i << ", with the value: " << arr[i] << " is unique.\n";
		}
		isUnique = true;
	}
	return 0;
}