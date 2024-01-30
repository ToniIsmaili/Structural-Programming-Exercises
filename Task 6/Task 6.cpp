#include <iostream>
using namespace std;

// Write a C++ program to insert an element in an array.

int main()
{
	int arr[100];
	int size = 10;
	int position, element;

	for (int i = 0; i < size; i++)
	{
		cout << "Enter the " << i << " element: ";
		cin >> arr[i];
	}

	cout << "Enter the position you want to insert the element in: ";
	cin >> position;
	cout << "Enter the element you want to insert: ";
	cin >> element;

	for (int i = size; i >= position; i--)
	{
		arr[i + 1] = arr[i];
	}
	arr[position] = element;
	size++;

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

}