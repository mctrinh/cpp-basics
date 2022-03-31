#include <iostream>

int main(){
    
    int value {45};

    std::cout << "The value is : " << value << std::endl;
    std::cout << std::endl;

    // Compound addition
    value += 5; // equivalent to value = value + 5
    std::cout << "The value is (after +=5) : " << value << std::endl; // 50
    std::cout << std::endl;

    // Compound subtraction
    value -=5;  // equivalent to value = value - 5
    std::cout << "The value is (after -=5): " << value << std::endl; // 45
    std::cout << std::endl;

    // Compound multiply
    value *= 2; // equivalent to value = value * 2
    std::cout << "The value is (after *=2): " << value << std::endl; // 90
    std::cout << std::endl;

    // Compound division
    value /= 3; // equivalent to value = value / 3
    std::cout << "The value is (after /=3): " << value << std::endl; // 30
    std::cout << std::endl;

    // Compound modulus
    value %=11; // equivalent to value = value % 11
    std::cout << "The value is (after %=11): " << value << std::endl; // 8
    std::cout << std::endl;

    return 0;
}