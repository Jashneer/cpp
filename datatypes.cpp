#include <iostream>
int main() {
    int a = 10;
    float b = 3.14f;
    double c = 3.1415926535;
    char d = 'A';
    bool e = true;

    std::cout << "Data Type\tValue\t\tSize (bytes)" << std::endl;
    std::cout << "int\t\t" << a << "\t\t" << sizeof(a) << std::endl;
    std::cout << "float\t\t" << b << "\t\t" << sizeof(b) << std::endl;
    std::cout << "double\t\t" << c << "\t\t" << sizeof(c) << std::endl;
    std::cout << "char\t\t" << d << "\t\t" << sizeof(d) << std::endl;
    std::cout << "bool\t\t" << e << "\t\t" << sizeof(e) << std::endl;

    return 0;
}