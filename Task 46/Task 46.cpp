#include <iostream>
using namespace std;

// Shkruani një program C++ për të kontrolluar nëse një numër është pozitiv ose negativ, duke përdorur funksion.

bool is_positive(float num) {
	if (num < 0)
	{
		return false;
	}
	return true;
}

int main()
{
	float num = -2.9;

	is_positive(num) ? cout << "Number is positive." : cout << "Number is negative.";
	return 0;
}