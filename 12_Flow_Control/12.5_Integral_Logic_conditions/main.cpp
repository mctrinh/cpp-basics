#include <iostream>

int main(){

    int condition {-5};

    bool bool_condition = condition; // different from 0 means true

    std::cout << "condition is : " << condition << std::endl;
    std::cout << "bool condition is : " << bool_condition << std::endl;
    std::cout << std::boolalpha;
    std::cout << "bool condition is : " << bool_condition << std::endl;


    if(bool_condition){
        std::cout << "We have a " << bool_condition << " in our variable " << std::endl; // different from 0
    }else
    {
        std::cout << "We have " << bool_condition << " in our variable" << std::endl; // zero
    }

    return 0;
}
