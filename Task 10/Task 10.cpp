#include <iostream>
using namespace std;

// Write a C++ program to count total number of duplicate elements in an array.

int main()
{
	const int size = 10;
	int arr[size] = { 1, 1, 3, 2, 5, 3, 7, 8, 2, 0 };
	int count_duplicate = 0;
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
		if (!isUnique)
		{
			count_duplicate++;
		}
		isUnique = true;
	}
	cout << "The total number of duplicate elements is " << count_duplicate << endl;
	return 0;
}