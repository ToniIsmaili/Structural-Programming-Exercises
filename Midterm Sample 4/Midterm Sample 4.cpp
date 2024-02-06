#include <iostream>
using namespace std;

// define a function InsertBeforWord(...(, that in a given sentence a, before each word will insert the character given in the variable what.

void shiftChars(char arr[], int pos) {
	int len = strlen(arr);
	for (int i = len - 1; i >= pos; i--) {
		arr[i + 1] = arr[i];
	}
	arr[len + 1] = '\0';
}

void insert(char sentence[], int pos, char key) {
	shiftChars(sentence, pos);
	sentence[pos + 1] = key;
}

void before_word(char arr[], char key) {
	for (int i = 0; arr[i] != '\0'; i++)
	{
		if (arr[i] == ' ' && arr[i+1] != ' ')
		{
			insert(arr, i, key);
		}
	}

	shiftChars(arr, 0);
	arr[0] = key;

}

int main()
{
	char arr[100];
	cin.getline(arr, 100);
	int len = strlen(arr);
	before_word(arr, '*');

	cout << arr;
}