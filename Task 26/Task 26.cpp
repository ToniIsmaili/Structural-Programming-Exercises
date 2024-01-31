#include <iostream>
using namespace std;

// Write a C++ program to check Identity matrix.

int main()
{
	const int size = 3;
	int arr[size][size] = { {1, 0, 0}, {0, 1, 4}, {0, 0, 1} };
	bool isIdentity = true;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (i == j && arr[i][j] != 1) {
				isIdentity = false;
			}
			if (i != j && arr[i][j] != 0)
			{
				isIdentity = false;
			}
		}
	}
	
	isIdentity ? cout << "Given matrix is an identity matrix.\n" : cout << "Given matrix isnt an identity matrix.";
	return 0;
}