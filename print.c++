#include <print>
#include <string>

int main() {
    double x = 1.0;
    int i = 2;
    std::string s = "example";

    // Basic formatting
    std::println("x = {}, i = {}, s = {}", x, i, s); 

    // Advanced formatting with format specifiers
    std::println("x = {:5.2f}, i = {:03d}, s = {:^20}", x, i, s); 
    // {:5.2f} formats x as a floating-point number with 2 decimal places and a total width of 5
    // {:03d} formats i as an integer with leading zeros to a width of 3
    // {:^20} centers s within a field of 20 characters
    return 0;
}
