#include <iostream> // Required for input/output operations like std::cout
#include <cmath>    // Required for mathematical functions like std::fma

int main() {
    double x = 2.1;
    double y = 4.2;
    double z = 9.4;

    // Using std::fma
    double result_fma = std::fma(x, y, z);
    std::cout << "Using std::fma: " << x << " * " << y << " + " << z << " = " << result_fma << std::endl;

    // For comparison, performing multiplication and addition separately
    double result_separate = (x * y) + z;
    std::cout << "Performing separately: " << x << " * " << y << " + " << z << " = " << result_separate << std::endl;

    // Demonstrating a case where fma can provide more precision
    double a = 1e16;
    double b = 3.14159;
    double c = -1e16;

    double result_high_precision_fma = std::fma(a, b, c);
    std::cout << "\nHigh precision example (fma): " << result_high_precision_fma << std::endl;

    double result_high_precision_separate = (a * b) + c;
    std::cout << "High precision example (separate): " << result_high_precision_separate << std::endl;

    return 0;
}
