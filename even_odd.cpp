#include <iostream>
using namespace std;

int main() {
    int n;
    std::cin >> n;

    if(n%2==0) {
        std::cout<<"Even"<< std::endl;
    }
    else {
        std::cout<<"Odd"<< std::endl;
    }
}