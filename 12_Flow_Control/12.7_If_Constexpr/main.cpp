#include <iostream>

int main(){

   constexpr bool condition {false};        // constexpr can not be changed

   if constexpr (condition){
       std::cout << "Condition is true" << std::endl;
   }else{
       std::cout << "Condition is false" << std::endl;
   }
   
    return 0;
}
