#include <iostream>
using namespace std;

// Shkruani nj� program C++ p�r t� kontrolluar n�se nj� num�r �sht� pozitiv ose negativ, duke p�rdorur funksion.

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