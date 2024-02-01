#include <iostream>
using namespace std;

// Shkruaj një program C++ për të gjetur të gjithë numrat perfect midis intervalit të dhënë duke përdorur funksionet.

bool is_perfect(int num) {

	int sum = 0;

	for (int i = 1; i < num; i++)
	{
		if (num % i == 0)
		{
			sum += i;
		}
	}
	return sum == num;
}

void find_perfect(int arr[], int start_pos, int end_pos) {
	
	for (int i = start_pos; i <= end_pos; i++)
	{
		if (is_perfect(arr[i])) {
			cout << "The number ("<< arr[i] << ") at pos " << i << " is perfect" << endl;
		}
	}
}

int main()
{
	int arr[20] = { 6, 2, 3, 4, 5, 6, 7, 8, 9, 10, 28, 12, 13, 14, 15, 16, 496, 18, 19, 6 };
	find_perfect(arr, 4, 10);
	return 0;
}