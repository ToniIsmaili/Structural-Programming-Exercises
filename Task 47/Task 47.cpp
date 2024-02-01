#include <iostream>
using namespace std;

// Shkruani një program C++ për të kontrolluar nëse një numër është numër "interesant"
// ( perbehet vetem nga shifra cift), apo perfekt ( numri eshte i barabarte me shumen e pjestuesve)
// duke përdorur funksione të vecanta.

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

bool is_perfect(int num) {

	int sum = 0;
	
	for (int i = 1; i < num; i++)
	{
		if (num % i == 0)
		{
			sum += i;
		}
	}
	if (sum == num)
	{
		return true;
	}
	else {
		return false;
	}
}

int main()
{
	int num = 496;
	is_interesting(num) ? cout << "The number is interesting.\n" : cout << "The number is not interesting\n";
	is_perfect(num) ? cout << "The number is perfect.\n" : cout << "The number is not perfect\n";
}