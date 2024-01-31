#include <iostream>
using namespace std;

// Shkruaj një program C++ për të gjetur karakterin me frekuencë më të ulët në një varg.

void get_frequency(char arr[], char target, int& best_count, char& best_char) {

    int local_best = 0;

    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == target)
        {
            local_best++;
        }
    }

    if (local_best < best_count)
    {
        best_count = local_best;
        best_char = target;
    }
}

int main()
{
    const int size = 100;
    char arr[size];
    cin.getline(arr, size);

    int current_best_count = size;
    char current_best_char = NULL;

    for (int i = 0; arr[i] != '\0'; i++)
    {
        get_frequency(arr, arr[i], current_best_count, current_best_char);
    }
    cout << "The most frequent char is '" << current_best_char << "', with " << current_best_count << " occurences.";
    return 0;
}