#include <iostream>
using namespace std;

// Shkruaj nj� program C++ p�r t� num�ruar numrin e p�rgjithsh�m t� fjal�ve n� nj� varg.

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