#include <iostream>
using namespace std;

// Write a C++ program to find determinant of a matrix. (Copied from ChatGPT)

// Function to calculate the determinant of a 3x3 matrix
float determinant3x3(float mat[3][3]) {
    float det = 0;

    for (int i = 0; i < 3; ++i) {
        det += mat[0][i] * (mat[1][(i + 1) % 3] * mat[2][(i + 2) % 3] - mat[1][(i + 2) % 3] * mat[2][(i + 1) % 3]);
    }

    return det;
}

int main() {
    float matrix[3][3];

    // Input the elements of the 3x3 matrix
    cout << "Enter the elements of the 3x3 matrix:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "Enter element (" << i + 1 << "," << j + 1 << "): ";
            cin >> matrix[i][j];
        }
    }

    // Calculate and display the determinant
    float det = determinant3x3(matrix);
    cout << "Determinant of the 3x3 matrix is: " << det << endl;

    return 0;
}
