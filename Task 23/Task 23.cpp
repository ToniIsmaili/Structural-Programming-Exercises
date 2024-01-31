#include <iostream>
using namespace std;

// Write a C++ program to find sum of lower triangular matrix.

int main()
{
	const int size = 3;
	int arr[size][size] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (j < i) {
				sum += arr[i][j];
			}
		}
	}

	cout << "The sum of the lower triangular matrix is: " << sum << endl;
	return 0;
}