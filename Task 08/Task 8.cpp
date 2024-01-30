#include <iostream>
using namespace std;

// Write a C++ program to count frequency of each element in an array.

int main()
{
	int arr[10] = { 1, 0, 5, 8, 1, 3, 9, 5, 6, 2 };
	int freq[10] = { 0 };

	for (int i = 0; i < 10; i++)
	{
		freq[arr[i]]++;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << "The number " << i << " has occured " << freq[i] << " times\n";
	}
	return 0;
}