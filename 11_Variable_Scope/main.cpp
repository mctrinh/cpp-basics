#include <iostream>

int global_var1 {23}; // global variable

void some_function(){
    int local_var {10};
    std::cout << "Inside some_function global_var : " << global_var1 << std::endl;
    std::cout << "Inside some_function local_var : " << local_var << std::endl;
}

void some_other_function(){
    //local_var = 5;
}


int main(){

    std::cout << "Inside main function global_var : " << global_var1 << std::endl;
    
    int local_var = 5; // Don't affect local_var in some_function()
    
    some_function();

    return 0;
}