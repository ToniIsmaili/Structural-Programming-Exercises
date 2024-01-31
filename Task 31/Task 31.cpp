#include <iostream>
using namespace std;

// Shkruani një program C++ për të kontrolluar nëse një varg është palindrome apo jo.

int main()
{
	char arr[100];
	cin.getline(arr, 100);

	for (int i = 0; i < strlen(arr) / 2; i++)
	{
		if (arr[i] != arr[strlen(arr) - 1 - i])
		{
			cout << "The sentence isnt palindrome";
			return 0;
		}
	}
	
	cout << "The sentence is palindrome";
	return 0;
}