#include <iostream>
using namespace std;

// Shkruaj një program C++ për të gjetur kub të nje numri duke përdorur funksion.

float cube(float base) {
    return base * base * base;
}

int main()
{
    cout << cube(3.1);
    return 0;
}