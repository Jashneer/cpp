#include <iostream>
using namespace std;

int main() {
    int marks;
    cin >> marks;

    if(marks>90 && marks<=100) {
        cout << "A";
    }
    else if(marks>80 && marks<=90) {
        cout << "B";
    }
    else if(marks>70 && marks<=80) {
        cout << "C";
    }
    else if(marks<=70) {
        cout << "Fail";
    }
}