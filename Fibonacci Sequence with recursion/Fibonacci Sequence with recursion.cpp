#include <iostream>
using namespace std;

// Fibonacci Sequence with recursion

void fibonacci(int step, int num_one, int num_two) {

    if (step > 10) {
        return;
    }

    cout << num_one + num_two << " ";
    return fibonacci(++step, num_two, num_one + num_two);
}

bool is_interesting(int number) {
    // All even numbers
    if (number == 0) {
        return true;
    }

    if ((number % 10) % 2 != 0) {
        return false;
    }
    return is_interesting(number / 10);
}

bool is_perfect(int number, int div, int sum) {
    // the sum of all devidors == number
    if (div == 0) {
        if (sum == number) {
            return true;
        }
        else {
            return false;
        }
    }

    if (number % div == 0) {
        sum += div;
    }

    return is_perfect(number, --div, sum);
}

int multiply(int num_one, int num_two) {

    if (num_two == 0) {
        return 0;
    }
    return num_one + multiply(num_one, --num_two);
}

int main()
{
    fibonacci(0, 0, 1);
    // is_interesting(4682) ? cout << "yes." : cout << "no.";
    // is_perfect(4, 3, 0) ? cout << "yes." : cout << "no.";
    // cout << multiply(3, 4);
}