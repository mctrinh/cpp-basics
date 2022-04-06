#include <iostream>

int main(){

    // Can use normal pointer to char like we've been doing for double, int, ...
    char *p_char_var {nullptr};
    char char_var {'A'};

    p_char_var = &char_var;
    std::cout << "The value stored in p_char_var is : " << *p_char_var << std::endl;

    char char_var1 {'C'};
    p_char_var = &char_var1;
    std::cout << "The value stored in p_char_var is : " << *p_char_var << std::endl;


    // Pointer to char can also do something special.
    // You can initialize with a string literal : C-String

    const char * message {"Hello World!"};      // Store the address of the first character of the string
    std::cout << "message : " << message << std::endl;

    // *message = "B"; // Compiler error
    std::cout << "*message : " << *message << std::endl;

    // Allow users to modify the string
    char message1[] {"Hello World!"};
    message1[0] = 'B';
    std::cout << "message1 : " << message1 << std::endl;

    return 0;
}
