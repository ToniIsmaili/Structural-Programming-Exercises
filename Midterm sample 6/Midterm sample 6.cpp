// Example program
#include <iostream>
#include <cctype>
using namespace std;

int delChar(char arr[]) {

    int count = 0;

    for (int i = 0; arr[i] != '\0'; i++) {

        if (arr[i] == 'a' || arr[i] == 'A') {

            for (int j = i; j < strlen(arr); j++) {

                arr[j] = arr[j + 1];

            }
            count++;
            i--;
        }

    }
    return count;
}

int main()
{
    char arr[100];
    cin.getline(arr, 100);

    int count = delChar(arr);
    cout << arr << endl;
    cout << count;
}