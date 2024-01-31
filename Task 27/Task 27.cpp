#include <iostream>
using namespace std;

// Write a C++ program to check if a matrix is symetric.

int main()
{
	const int size = 3;
	int arr[size][size] = { {1, 1, -1}, {1, 2, 0}, {-1, 0, 5} };
	bool isSymetric = true;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[i][j] != arr[j][i]) {
				isSymetric = false;
			}
		}
	}
	isSymetric ? cout << "It is symetric" : cout << "It isnt symetric";
	return 0;
}