#include <iostream>
using namespace std;

// Shkruaj nj� program C++ p�r t� gjetur maksimumin dhe minimumin midis dy numrave duke p�rdorur funksione t� vecanta.

float max(float a, float b) {
	if (a > b)
	{
		return a;
	}
	return b;
}

float min(float a, float b) {
	if (a < b)
	{
		return a;
	}
	return b;
}

int main()
{
	float a = 5.2, b = 7.8;
	cout << max(a, b) << endl;
	cout << min(a, b) << endl;
	return 0;
}