#include <iostream>

int main(){

    // Expressions separated by comma execute the same time
    
    for (size_t i{0}, x{5}, y{22}; y > 15; ++i, x+=5, y-=1){
        std::cout << "i: " << i << ", x : " << x << ", y : " << y << std::endl;

    }
    
    return 0;
}
