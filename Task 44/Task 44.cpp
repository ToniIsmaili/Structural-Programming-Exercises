#include <iostream>
using namespace std;

// Shkruaj një program C++ për të gjetur diametrin, perimetrin dhe sipërfaqen e rrethit duke përdorur funksione të vecanta.

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