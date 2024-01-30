#include <iostream>
using namespace std;

// Write a C++ program to find second largest element in an array.

int main()
{
	const int size = 5;
	int arr[size] = { 1, 4, 3, 6, 5 };
	int max = arr[0], second_max = arr[0];

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max) {
			max = arr[i];
		}
	}

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > second_max && arr[i] < max) {
			second_max = arr[i];
		}
	}

	cout << "The second largest number in the array is: " << second_max << endl;
	return 0;
}