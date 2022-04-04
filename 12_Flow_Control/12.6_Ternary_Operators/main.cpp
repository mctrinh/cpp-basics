#include <iostream>

int main(){

	int max{};
    int a{35};
    int b{200};
	
    std::cout << std::endl;
	std::cout << "using regular if " << std::endl;
	
    if(a >  b){
        max = a;
    }else{
        max = b;
    }
    std::cout << "max : " << max << std::endl;


    std::cout << "using ternary operator " << std::endl;
    // Ternary expression: result = (condition)? option1 : option2;
    // Equal to
    /*
    if(condition){
        result = option1;
    }else{
        result = option2;
    }
    */
    max = (a > b)? a : b;       // Ternary operator, a & b should be in the same types, or types are convertiable
    std::cout << "max : " << max << std::endl;
    
    auto max1 = (a > b)? a : 22.5f;   // 22.5f auto round off to 22 (int type of a)
    std::cout << "max1 : " << max1 << std::endl;


    // Ternary Initialization
    std::cout << std::endl;
    std::cout << "speed" << std::endl;
    bool fast = false;

    int speed {fast? 300:150};

    std::cout << "The speed is : " << speed << std::endl;

    return 0;
}
