#include <iostream>
using namespace std;

// Shkruani një program C++ për të fshire shfaqjen e fundit të një karakteri nga vargu.

int main()
{
    char arr[100];
    cin.getline(arr, 100);
    char target;
    cin >> target;
    int position = -1;

    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == target)
        {
            position = i;
        }
    }

    for (int i = position; arr[i] != '\0'; i++)
    {
        arr[i] = arr[i + 1];
    }
    cout << arr;
    return 0;
}