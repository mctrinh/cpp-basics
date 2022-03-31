#include <iostream>

int main(){
    
    int value {5};
    // Increment by one
    value = value + 1;
    std::cout << "The value is : " << value << std::endl; // 6

    value = 5;  // Reset value to 5

    // Decrement by one
    value = value - 1;  //4
    std::cout << "The value is : " << value << std::endl; // 4
    std::cout << std::endl;


    std::cout << "===== Postfix increment and decrement ======" << std::endl;

    // Postfix : Incrementing and decrementing
    
    // Increment with postfix ++ : Retrieve the current value then increment afterward
    // Reset value to 5
    value = 5;

    std::cout << "The value is (incrementing): " << value++ << std::endl; // 5, print current value then increase it by 1
    std::cout << "The value is : " << value << std::endl; // 6
    std::cout << std::endl;

    // Decrement with postfix
    // Reset value to 5
    value = 5;

    std::cout << "The value is (decrementing): " << value-- << std::endl; // 5, print current value then decrease it by 1
    std::cout << "The value is : " << value << std::endl; // 4
    std::cout << std::endl;


    std::cout << "===== Prefix increment and decrement ======" << std::endl;

    // Prefix: Incrementing
    // Reset value to 5
    value = 5;

    ++value;        // increase by 1
    std::cout << "The value is (prefix++): " << value << std::endl; // 6

    // Reset value to 5
    value = 5;
    std::cout << "The value is (prefix++ in place): " << ++value << std::endl; // 6, increase by 1 first, then print it out
    std::cout << std::endl;


    // Prefix: Decrementing
    // Reset value to 5
    value = 5;

    --value;        // decrease by 1
    std::cout << "The value is (prefix--): " << value << std::endl; // 4

    // Reset value to 5
    value = 5;
    std::cout << "The value is (prefix-- in place): " << --value << std::endl; // 4, decrease by 1 first, then print it out
    std::cout << std::endl;

    return 0;
}