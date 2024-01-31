#include <iostream>
using namespace std;

// Write a C++ program to find upper triangular matrix.

int main()
{
	const int size = 3;
	int arr[size][size] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (j > i) {
				cout << arr[i][j] << " ";
			}
		}
	}
	return 0;
}