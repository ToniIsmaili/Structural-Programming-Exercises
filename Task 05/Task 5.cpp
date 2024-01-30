#include <iostream>
using namespace std;

// Write a C++ program to copy all elements from an array to another array.

int main()
{
    const int size = 5;
    int original_arr[size] = { 1, 2, 3, 4, 5 }, copy_arr[size];

	for (int i = 0; i < size; i++)
	{
		copy_arr[i] = original_arr[i];
	}

	for (int i = 0; i < size; i++)
	{
		cout << copy_arr[i] << " ";
	}
	return 0;
}