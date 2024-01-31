#include <iostream>
using namespace std;

// Write a C++ program to find sum of minor diagonal elements of a matrix.

int main()
{
	const int size = 3;
	int arr[size][size] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	int sum = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (size - 1 - i == j)
			{
				sum += arr[i][j];
			}
		}
	}
	cout << "The sum of the minor diagonal is: " << sum << endl;
	return 0;
}