#include <iostream>

int main(){

    // Compile time error if forget the last comma
    std::cout << "Hello World!" << std::endl;

    // Run time error
    int value = 7/0;
    std::cout << "value : " << value << std::endl;
    return 0;
}

