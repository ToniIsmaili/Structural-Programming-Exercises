// write  a recursive function to check if a number n, given by the keyb is interesting.
// the number is interesting(consisted of 1, 3 5 only in each odd position)

#include <iostream>
using namespace std;

int digitsAmount(int number) {
	int count = 0;

	while (number > 0) {
		count++;
		number /= 10;
	}
	return count;
}

bool checkDigit(int number) {
	return number == 1 || number == 3 || number == 5;
}

bool isInt(int number) {
	if (number == 0) {
		return true;
	}

	if (digitsAmount(number) % 2 != 0) {
		
		if (checkDigit(number % 10)) {
			return isInt(number / 100);
		} 

		return false;
	}

	return isInt(number / 10);

}

int main() {
	isInt(1856113552) ? cout << "yes" : cout << "no";
}