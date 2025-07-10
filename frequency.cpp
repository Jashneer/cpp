#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    bool counted[n] = {false};

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nFrequencies of elements:\n";
    for (int i = 0; i < n; i++) {
        if (counted[i])
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                counted[j] = true;
            }
        }

        cout << arr[i] << " " << count << "\n";
    }

    return 0;
}
