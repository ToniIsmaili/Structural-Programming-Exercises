#include <iostream>
using namespace std;

// Write a code that for an array a with n elements given by the keyboard, will create an array b of only
// positive and even elements and than print it on the screen. Define functions Input, Create and Output for each functionality.

void input(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << "Input the element at index: " << i << endl;
		cin >> arr[i];
	}
}

void output(int arr[], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << "The element at index" << i << " is: " << arr[i] << endl;
	}
}

void create(int original[], int copy[], int& size) {
	int index = 0;
	for (int i = 0; i < size; i++)
	{
		if (original[i] > 0 && original[i] % 2 == 0)
		{
			copy[index] = original[i];
			index++;
		}
	}
	size = index;
}

int main()
{
	int size = 10;
	int original[10], copy[10];

	input(original, size);
	create(original, copy, size);
	output(copy, size);
}