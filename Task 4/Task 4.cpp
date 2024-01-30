#include <iostream>
using namespace std;

// Write a C++ program to count total number of negative elements in an array.

int main()
{
	const int size = 5;
	int arr[size] = { -1, 0, -4, 5, 6 };
	int count_negative = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0) {
			count_negative++;
		}
	}

	cout << "Total negative numbers in array: " << count_negative << endl;
	return 0;
}