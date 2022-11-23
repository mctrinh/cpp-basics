#include <iostream>

//Evaluate this function at compile time. If you can't 
//do that throw a compiler error
consteval int get_value(int multiplier){
    return 3 * multiplier;
}

int main(){

    int result = get_value(4);

    // int some_var{5}; // Error
    const int some_var{5}; // Fixed
    result = get_value(some_var);
   
    return 0;
}