#include <iostream>
using namespace std;

// Write a C++ program to find sum of each row and column of a matrix.

int main()
{
	const int size = 3;
	int arr[size][size] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	int sum_row = 0, sum_col = 0;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			sum_row += arr[i][j];
			sum_col += arr[j][i];
		}
		cout << "The sum of the row " << i << " is: " << sum_row << endl;
		cout << "The sum of the col " << i << " is: " << sum_col << endl;
		cout << endl;
		sum_row = 0;
		sum_col = 0;
	}
	return 0;
}