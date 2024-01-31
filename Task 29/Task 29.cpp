#include <iostream>
using namespace std;

// Shkruaj një program C++ për të numëruar numrin e përgjithshëm të fjalëve në një varg.

int main()
{
	char arr[100];
	cin.getline(arr, 100);
	int count_words = 1;

	for (int i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i] == ' ')
		{
			count_words++;
		}
	}
	cout << "Number of words in the sentence is: " << count_words;
	return 0;
}