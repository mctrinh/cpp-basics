#include <iostream>

consteval int get_value(){
    return 3;
}

int main(){
    // std::cout means print character out to the console
    // std::endl means end line
    std::cout << "Hello World in C++20!" << std::endl;
    std::cout << "This is TMC from MSDL @JBNU!" << std::endl;
    std::cout << "This is where he start C++ journey!" << std::endl;

    // <return> inside the main function, stops the execution of the program
    // <return 0> means the program will execute successfully
    // <return 1> means there is some errors while executing the program
    return 0;
}

// <return> inside the user-defined function, works as boolean (true and false)
// <return 0> returning false from a function
// <return 1> returning true from a function

/*
    This is a block comment that englobes multiple
    lines of text
*/
