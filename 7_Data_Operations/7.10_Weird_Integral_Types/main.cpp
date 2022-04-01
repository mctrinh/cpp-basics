#include <iostream>

int main(){
    
	// Integral types less than 4 bytes in size don't support arithmetic operations
    short int var1 {10}; // 2 bytes
	short int var2 {20};
	
	char var3 {40}; // 1 byte
	char var4 {50};
	
	std::cout << "size of var1 : " << sizeof(var1) << std::endl;
	std::cout << "size of var2 : " << sizeof(var2) << std::endl;
	std::cout << "size of var3 : " << sizeof(var3) << std::endl;
	std::cout << "size of var4 : " << sizeof(var4) << std::endl;
	
	auto result1 = var1 + var2;     // Conversion to int (4 bytes)
	auto result2 = var3 + var4;     // Conversion to int
	
	std::cout << "size of result1 : " << sizeof(result1) << std::endl; // 4 bytes
	std::cout << "size of result2 : " << sizeof(result2) << std::endl; // 4 bytes


    return 0;
}