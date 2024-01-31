#include <iostream>
using namespace std;

// Shkruaj një program C++ për të kthyer rendin e fjalëve në një varg të dhënë.

void print_word(char arr[], int start_pos, int &word_length) {
	for (int j = 0; j < word_length; j++)
	{
		cout << arr[start_pos + j];
	}
	word_length = 0;
}

int main()
{
	char arr[100];
	cin.getline(arr, 100);
	int word_length = 0;

	for (int i = strlen(arr) - 1; i >= 0; i--)
	{
		word_length++;

		if (i == 0) {
			cout << " ";
			print_word(arr, i, word_length);
		}

		if (arr[i] == ' ' && arr[i + 1] != ' ')
		{
			print_word(arr, i, word_length);
		}
	}
	return 0;
}