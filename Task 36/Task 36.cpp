#include <iostream>
using namespace std;

// Shkruaj një program C++ për të numëruar paraqitjet e një karakteri në vargun e dhënë.

int main()
{
	char arr[100];
	cin.getline(arr, 100);

	char target;
	cin >> target;

	int count = 0;

	for (int i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i] == target)
		{
			count++;
		}
	}
	cout << "The number of " << target << " is: " << count;
	return 0;
}