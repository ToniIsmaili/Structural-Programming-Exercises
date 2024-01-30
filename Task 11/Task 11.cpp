#include <iostream>
using namespace std;

// Write a C++ program to delete all duplicate elements from an array.

int find_duplicate(int arr[], int size) {
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
				return j;
			}
		}
	}
	return NULL;
}

int main()
{
	int size = 7;
	int arr[100] = { 1, 1, 2, 3, 4, 1, 0 };

	int duplicate_position =  find_duplicate(arr, size);
	
	while (duplicate_position != NULL)
	{
		for (int i = duplicate_position; i < size; i++)
		{
			arr[i] = arr[i + 1];
		}
		size--;
		duplicate_position = find_duplicate(arr, size);
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}