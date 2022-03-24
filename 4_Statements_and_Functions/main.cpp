#include <iostream>

/* 
    - A statement is a basic unit of computation in a C++ program.
    - Every C++ program is a collection of statements orgainized,
      in a certain way to achieve some goals.
    - Statements end with a semicolon in C++ (;)
*/ 

// Pre-define any function before using
int addNumbers(int first_param, int second_param){
    int result = first_param + second_param;
    return result;
}

int multiplyNumbers(int first_param, int second_param){
    int result = first_param * second_param;
    return result;
}


int main(){
    
    int first_number {13};   // Statement
    int second_number {7}; 

    std::cout << "First number : " << first_number << std::endl;
    std::cout << "Second number : " << second_number << std::endl;

    // Perform direct computation inside the main program
    int sum = first_number + second_number;
    std::cout << "Sum : " << sum << std::endl;

    // Call pre-defined function
    sum = addNumbers(25,7);
    std::cout << "Sum : " << sum << std::endl;

    sum = addNumbers(30,54);
    std::cout << "Sum : " << sum << std::endl;

    std::cout << "Sum : " << addNumbers(5,65) << std::endl;

    // Call pre-defined function
    int mul = multiplyNumbers(5,6);
    std::cout << "Mul : " << mul << std::endl;

    return 0;
}

