#include <iostream>

int main(){
    
    signed int value1 {10};     // Signed means can put either positive or negative number
    signed int value2 {-300};

    std::cout << "value1 : " << value1 << std::endl;
    std::cout << "value2 : " << value2 << std::endl;
    std::cout << "sizeof(value1) : " << sizeof(value1) << std::endl;    // Size in bytes
    std::cout << "sizeof(value2) : " << sizeof(value2) << std::endl;

    unsigned int value3 {4};        // Unsigned means can only put possitive number
    // unsigned int value4 {-5};    // Compile error

    // short and long
    short short_var {-32456};                           // 2 Bytes
    short int short_int {455};                          // 2 Bytes
    signed short signed_short {122};                    // 2 Bytes
    signed short int signed_short_int {-456};           // 2 Bytes
    unsigned short int unsigned_short_int {456};        // 2 Bytes

    std::cout << "Short variable : " << short_var << " , size : " << sizeof(short) << " bytes" << std::endl;
    std::cout << "Short int : " << short_int << " , size : " << sizeof(short int) << " bytes" << std::endl;
    std::cout << "Signed short : " << signed_short << " , size : " << sizeof(signed short) << " bytes" << std::endl;
    std::cout << "Signed short int : " << signed_short_int << " , size : " << sizeof(signed short int) << " bytes" << std::endl;
    std::cout << "Unsigned short int : " << unsigned_short_int << " , size : " << sizeof(unsigned short int) << " bytes" << std::endl;
    std::cout << "------------------------------------------- " << std::endl;

    int int_var {55};                   // 4 Bytes
    signed signed_var {66};             // 4 Bytes
    signed int signed_int {77};         // 4 Bytes
    unsigned int unsigned_int {77};     // 4 Bytes

    std::cout << "Int variable : " << int_var << " , size : " << sizeof(int) << " bytes" << std::endl;
    std::cout << "Signed variable : " << signed_var << " , size : " << sizeof(signed) << " bytes" << std::endl;
    std::cout << "Signed int : " << signed_int << " , size : " << sizeof(signed int) << " bytes" << std::endl;
    std::cout << "Unsigned int : " << unsigned_int << " , size : " << sizeof(unsigned int) << " bytes" << std::endl;
    std::cout << "------------------------------------------- " << std::endl;

    long long_var {88};                         // 4 OR 8 Bytes
    long int long_int {33};                     // 
    signed long signed_long {44};               //
    signed long int signed_long_int {44};       //
    unsigned long int unsigned_long_int {44};   //

    std::cout << "Long variable : " << long_var << " , size : " << sizeof(long) << " bytes" << std::endl;
    std::cout << "Long int : " << long_int << " , size : " << sizeof(long int) << " bytes" << std::endl;
    std::cout << "Signed long : " << signed_long << " , size : " << sizeof(signed long) << " bytes" << std::endl;
    std::cout << "Signed long int : " << signed_long_int << " , size : " << sizeof(signed long int) << " bytes" << std::endl;
    std::cout << "Unsigned long int : " << unsigned_long_int << " , size : " << sizeof(unsigned long int) << " bytes" << std::endl;
    std::cout << "------------------------------------------- " << std::endl;

    long long long_long {888};                                  // 8 Bytes
    long long int long_long_int {999};                          //
    signed long long signed_long_long {444};                    //
    signed long long int signed_long_long_int {1234};           //
    unsigned long long int unsigned_long_long_int {1234};       //

    std::cout << "Long variable : " << long_long << " , size : " << sizeof(long long) << " bytes"  << std::endl;
    std::cout << "Long long int : " << long_long_int << " , size : " << sizeof(long long int) << " bytes"  << std::endl;
    std::cout << "Signed long long : " << signed_long_long << " , size : " << sizeof(signed long long) << " bytes"  << std::endl;
    std::cout << "Signed long long int : " << signed_long_long_int << " , size : " << sizeof(signed long long int) << " bytes"  << std::endl;
    std::cout << "Unsigned long long int : " << unsigned_long_long_int << " , size : " << sizeof(unsigned long long int) << " bytes"  << std::endl;
    std::cout << "------------------------------------------- " << std::endl;

    return 0;
}