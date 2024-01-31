#include <iostream>
using namespace std;

// Shkruaj një program C++ për të gjetur shfaqjen e parë të një karakteri në një varg të caktuar.

int main()
{
	char arr[100];
	cin.getline(arr, 100);
	char target;
	cin >> target;
	
	for (int i = 0; arr[i] != '\0'; i++)
	{
		if (target == arr[i])
		{
			cout << "Target char is in pos " << i;
			return 0;
		}
	}

	cout << "Target is not in array";
	return 0;
}