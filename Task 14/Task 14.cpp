#include <iostream>
using namespace std;

// Write a C++ program to search an element in an array.

int main()
{
	const int size = 5;
	int arr[size] = { 1, 2, 3, 1, 5 };
	int target;
	cin >> target;

	for (int i = 0; i < size; i++)
	{
		if (target == arr[i]) {
			cout << "Target is found at position " << i << endl;
		}
	}
	return 0;
}