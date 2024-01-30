#include <iostream>
using namespace std;

// Write a C++ program to delete an element from an array at specified position.

int main()
{
	int size = 10;
	int arr[100] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int position;
	cout << "Enter the position you want to delete: ";
	cin >> position;

	for (int i = position; i < size; i++)
	{
		arr[i] = arr[i + 1];
	}
	size--;

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}