#include <iostream>
using namespace std;

// Shkruani një program C për të shtypur të gjithë numrat"interesant" ( perbehet vetem nga shifra cift) midis intervalit të dhënë duke përdorur funksionet.

bool is_interesting(int num) {

	while (num > 0)
	{
		if ((num % 10) % 2 != 0)
		{
			return false;
		}
		num /= 10;
	}
	return true;
}

void find_interesting(int arr[], int start_pos, int end_pos) {

	for (int i = start_pos; i <= end_pos; i++)
	{
		if (is_interesting(arr[i])) {
			cout << "The number (" << arr[i] << ") at pos " << i << " is interesting" << endl;
		}
	}
}

int main()
{
	int arr[20] = { 6, 2, 3, 4, 5, 6, 7, 8, 22, 10, 28, 12, 13, 14, 15, 16, 496, 18, 19, 6 };
	find_interesting(arr, 4, 10);
	return 0;
}