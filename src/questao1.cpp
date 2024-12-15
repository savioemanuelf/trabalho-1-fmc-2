#include <iostream>
#include <cmath>

/**
 * +---=== Questão 1 ===---+ 
 * |
 * |
 * |
 * +-----------------------+
*/

void acharRaizes(double a, double b, double c) {
    double delta = b * b - 4 * a * c;
    double x1 = (-b + sqrt(delta)) / (2 * a);
    double x2 = (-b - sqrt(delta)) / (2 * a);
    std::cout << "x1 = " << x1 << std::endl;
    std::cout << "x2 = " << x2 << std::endl;
}

int main() {
    acharRaizes(1, -7, 12);
    return 0;
}
