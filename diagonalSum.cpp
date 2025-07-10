#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;

    int arr[n][n];
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int primarySum = 0, secondarySum = 0;
    for(int i = 0; i<n; i++) {
        primarySum +=arr[i][i];
        secondarySum += arr[i][n-i-1];
    }

    cout << "Sum of primary diagonal: " << primarySum << endl;
     cout << "Sum of secondary diagonal: " << secondarySum << endl;

}
