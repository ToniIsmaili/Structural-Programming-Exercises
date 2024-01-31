#include <iostream>
using namespace std;

// Shkruaj një program C++ për të gjetur anasjelltas të një vargu. (assuming it means inverse of a string.)

int main()
{
    char arr[100];
    cin.getline(arr, 100);

	for (int i = strlen(arr); i >= 0; i--)
	{
		cout << arr[i];
	}
	return 0;
}