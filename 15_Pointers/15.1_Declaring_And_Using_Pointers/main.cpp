#include <iostream>

int main(){
    /*
    // Declare and initialize pointers
    int* p_number {}; // Can only store an address of a variable of type int, will initialize with nullptr
    double*  p_fractional_number{};  // Can only store an address of a variable of type double

    // Explicitly initialize with nullptr
    int* p_number1{nullptr};                // nullptr means these pointers are not pointing anywhere
    int* p_fractional_number1{nullptr};     // can't use the values at the addresses where they point,
                                            // don't use pointers that contain null pointer

    // Pointers to different variables are of the same size
    std::cout << "sizeof(int) : " << sizeof(int) << std::endl; // 4
    std::cout << "sizeof(double) : " << sizeof(double) << std::endl; // 8
    std::cout << "sizeof(double*) : " << sizeof(double*) << std::endl;  // 8
    std::cout << "sizeof(int*) : " << sizeof(int*) << std::endl;        // 8
    std::cout << "sizeof(p_number1) : " << sizeof(p_number1) << std::endl;     // 8
    std::cout << "sizeof(p_fractional_number1) : " << sizeof(p_fractional_number1) << std::endl;    // 8


    // It doesn't matter if you put the * close to data type or to varible name
    int*  p_number2{nullptr};
    int * p_number3{nullptr};
    int  *p_number4{nullptr};           // All work the same
                                        // int *p_number4 format is easier
                                        // to understand when you have multiple
                                        // variables declared on the same line
    int *p_number5{}, other_int_var{};
    int* p_number6{}, other_int_var6{};	// Confusing as you wonder if other_int_var6
										// is also a pointer to int. It is not. It is an integer.
										// The structure is exactly the same for the
										// previous statement

    std::cout << "sizeof(p_number5) : " << sizeof(p_number5) << std::endl;
    std::cout << "sizeof(other_int_var) : " << sizeof(other_int_var) << std::endl;
    std::cout << "sizeof(p_number6) : " << sizeof(p_number6) << std::endl;
    std::cout << "sizeof(other_int_var6) : " << sizeof(other_int_var6) << std::endl;

    // It is better to separate these declarations on different lines though
    int *p_number7{};
    int other_int_var7{}; // No room for confusion this time
    */


    // Initializing pointers and assigning them data
    // We know that pointers store addresses of variables
    int int_var {43};
    int *p_int{&int_var};  // The address of operator (&);
    
    std::cout << "Int var : " << int_var << std::endl;
    std::cout << "p_int (Address in memory)  : " << p_int << std::endl;

    // You can also change the address stored in a pointer any time
    int int_var1 {65};
    p_int = &int_var1; // Assign a different address to the pointer
    std::cout << "p_int (with different address)  : " << p_int << std::endl;


    // Can't cross assign between pointers of different types
    int *p_int1{nullptr};
    double double_var{33};

    //p_int = &double_var; // Compiler error


    // Dereferencing a pointer :
    int* p_int2 {nullptr};
    int int_data {56};
    p_int2 = &int_data;

    std::cout << "value : " << *p_int2 << std::endl; // Dereferencing a pointer
    

    return 0;
}
