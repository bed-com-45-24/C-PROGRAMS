#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    // input dimensions
    cout << "Enter rows (max 3): ";
    cin >> rows;

    cout << "Enter columns (max 3): ";
    cin >> cols;

    // enforce limit
    if (rows > 3 || cols > 3) {
        cout << "Error: Dimensions must not exceed 3x3!" << endl;
        return 0;
    }

    // dynamic allocation
    double **arr = new double*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new double[cols];
    }

    // input values
    cout << "Enter values:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    // output values
    cout << "\nMatrix values:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // free memory
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}