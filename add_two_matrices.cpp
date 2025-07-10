#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows: \n";
    cin >> rows;
    cout << "Enter number of columns: \n";
    cin >> cols;

    int arr1[rows][cols], arr2[rows][cols], sum[rows][cols];

    cout <<  "Enter elements of arr1: \n";
    for(int i = 0; i<rows; i++) {
        for(int j = 0; j<cols; j++) {
            cin >> arr1[i][j];
        }
    }

    cout <<  "Enter elements of arr2: \n";
    for(int i = 0; i<rows; i++) {
        for(int j = 0; j<cols; j++) {
            cin >> arr2[i][j];
        }
    }

    for(int i = 0; i<rows; i++) {
        for(int j = 0; j<cols; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    cout << "Sum of the two matrices is: \n";

    for(int i = 0; i<rows; i++) {
        for(int j = 0; j<cols; j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
}