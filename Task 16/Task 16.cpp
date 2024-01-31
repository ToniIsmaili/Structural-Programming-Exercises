#include <iostream>
using namespace std;

// Write a C++ program to find sum of main diagonal elements of a matrix.

int main()
{
	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == j)
			{
				sum += arr[i][j];
			}
		}
	}
	cout << "The sum of the main diagonal is: " << sum << endl;
	return 0;
}