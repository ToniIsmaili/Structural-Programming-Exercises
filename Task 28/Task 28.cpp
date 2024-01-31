#include <iostream>
using namespace std;

// Shkruaj një program C++ për të numëruar numrin e përgjithshëm të zanoreve dhe bashkëtingëlloreve në një varg.

int main()
{
    char arr[100];
    cin.getline(arr, 100);
	int vowels = 0, consonants = 0;

	for (int i = 0; arr[i] != '\0'; i++)
	{
		switch (arr[i])
		{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'U':
		case 'O':
		case 'I':
		case 'E':
		case 'A':
			vowels++;
			break;
		default:
			consonants++;
			break;
		}
	}
	cout << "The number of vowels: " << vowels << ", and the number of consonants: " << consonants;
	return 0;
}