#include <iostream>
using namespace std;

// Write a C++ program to find maximum and minimum element in an array without and using recursion.

int main()
{
	int arr[10] = { 1, 2, 3, -1, -2, -3, 7, 8, 9, 0 };
	int max = arr[0], min = arr[0];

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
	}

	cout << "The maximum value in the array was: " << max << ", and the minimum value was: " << min << endl;
	return 0;
}