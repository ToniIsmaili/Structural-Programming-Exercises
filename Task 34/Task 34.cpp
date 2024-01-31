#include <iostream>
using namespace std;

// Shkruaj një program C++ për të gjetur shfaqjen e fundit të një karakteri në një varg të caktuar.

int main()
{
	char arr[100];
	cin.getline(arr, 100);
	char target;
	cin >> target;

	for (int i = strlen(arr); i >= 0; i--)
	{
		if (target == arr[i])
		{
			cout << "Target is at positon " << i;
			return 0;
		}
	}
	cout << "Target isnt in array";
	return 0;
}