#include <iostream>
using namespace std;

// Define a function that will take an array of integers, and an integer key, given by the keyboard,
// and will return the number of occurences of that given key in the array elements.

int count(int arr[], int size, int key) {

	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == key)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	int arr[10] = { 1, 2, 3, 1, 2, 3, 1, 2, 3, 4 };
	int key;
	cin >> key;

	cout << "The number of '" << key << "' in the array is: " << count(arr, 10, key);
	return 0;
}