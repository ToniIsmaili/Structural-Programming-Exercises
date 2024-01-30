#include <iostream>
using namespace std;

// Write a C++ program to count total number of even and odd elements in an array.

int main()
{
    const int size = 5;
    int arr[size] = { 1, 2, 3, 4, 5 };
    int odd = 0, even = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        } else {
            odd++;
        }
    }

    cout << "The total number of even numbers in the array is: " << even << ", and the total number of odd numbers is: " << odd << endl;
}