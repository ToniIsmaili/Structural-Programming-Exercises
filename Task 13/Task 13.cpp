#include <iostream>
using namespace std;

// Write a C++ program to put even and odd elements of array in two separate array.

int main()
{
	const int size = 5;
	int arr[size] = { 1, 2, 3, 4, 5 }, arr_odd[size], arr_even[size];
	int odd_index = 0, even_index = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] % 2 == 0) {
			arr_even[even_index] = arr[i];
			even_index++;
		} else {
			arr_odd[odd_index] = arr[i];
			odd_index++;
		}
	}

	cout << "Even array: ";
	for (int i = 0; i < even_index; i++)
	{
		cout << arr_even[i] << " ";
	}
	cout << endl;
	cout << "Odd array: ";
	for (int i = 0; i < odd_index; i++)
	{
		cout << arr_odd[i] << " ";
	}
	return 0;
}