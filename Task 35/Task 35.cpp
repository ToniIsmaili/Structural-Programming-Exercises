#include <iostream>
using namespace std;

// Shkruaj një program C++ për të kërkuar të gjitha paraqitjet e një karakteri në vargun e dhënë.

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
			cout << "Target is at position " << i << endl;
		}
	}
	return 0;
}