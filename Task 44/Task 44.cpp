#include <iostream>
using namespace std;

// Shkruaj nj� program C++ p�r t� gjetur diametrin, perimetrin dhe sip�rfaqen e rrethit duke p�rdorur funksione t� vecanta.

float circumference(float radius) {
    return 2 * 3.14 * radius;
}

float diameter(float radius) {
    return 2 * radius;
}

float area(float radius) {
    return 3.14 * (radius * radius);
}

int main()
{
    float radius = 5.3;
    cout << circumference(radius) << endl;
    cout << diameter(radius) << endl;
    cout << area(radius) << endl;
    return 0;
}