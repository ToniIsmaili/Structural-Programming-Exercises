#include <iostream>
using namespace std;

// Write a C++ program to merge two array to third array.

int main()
{
	int arr_one[5] = { 1, 2, 3, 4, 5 }, arr_two[5] = { 6, 7, 8, 9, 10 }, arr_three[10];

	for (int i = 0; i < 5; i++)
	{
		arr_three[i] = arr_one[i];
		arr_three[i + 5] = arr_two[i];
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr_three[i] << " ";
	}
	return 0;
}