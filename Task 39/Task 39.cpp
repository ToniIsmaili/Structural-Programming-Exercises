#include <iostream>
using namespace std;

// Shkruaj një program C++ për të numëruar frekuencën e secilit karakter në një varg.

int get_frequency(char arr[], char target) {
	int count = 0;
	for (int i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i] == target)
		{
			count++;
		}
	}
	return count;
}

bool is_checked(char hasChecked[], char target) {
	for (int i = 0; hasChecked[i] != '\0'; i++)
	{
		if (target == hasChecked[i])
		{
			return true;
		}
	}
	return false;
}

int main()
{
	const int size = 50;
	char arr[size], hasChecked[size];
	int check_index = 0;
	cin.getline(arr, size);

	for (int i = 0; arr[i] != '\0'; i++)
	{
		if (!is_checked(hasChecked, arr[i]))
		{
			cout << "The frequency of '" << arr[i] << "' in the array is " << get_frequency(arr, arr[i]) << endl;
			hasChecked[check_index] = arr[i];
			check_index++;
		}
	}
	return 0;
}