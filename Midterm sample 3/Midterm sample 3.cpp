#include <iostream>
using namespace std;

// Define a function that will take an array of char, what to replace and with what to replpace, modify the sentence 
// that each char what will be replaceed with the  character with.

void replace(char arr[], char what, char with) {
	for (int i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i] == what)
		{
			arr[i] = with;
		}
	}
}

int main()
{
	char arr[100];
	cin.getline(arr, 100);
	
	replace(arr, 'r', 'R');
	cout << arr;
}