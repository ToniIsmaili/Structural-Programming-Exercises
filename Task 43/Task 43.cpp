#include <iostream>
using namespace std;

// Shkruaj nj� program C++ p�r t� gjetur kub t� nje numri duke p�rdorur funksion.

float cube(float base) {
    return base * base * base;
}

int main()
{
    cout << cube(3.1);
    return 0;
}