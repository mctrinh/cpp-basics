#include <iostream>

int main(){

    int scores [] {1,2,3,4,5,6,7,8,9,10};

    std::cout << "score item count : " << std::size(scores) << std::endl;  // std::size (C++17)

    std::cout << "sizeof(scores) : " << sizeof(scores) << std::endl;
    std::cout << "sizeof(scores[0]) : " << sizeof(scores[0]) << std::endl;
    std::cout << "score item count : " << (sizeof(scores) / sizeof(scores[0])) << std::endl;


    size_t count {sizeof(scores)/sizeof(scores[0])};
    for(size_t i {0} ; i < count ; ++i){
        std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
    }
 
    // Range based for loop
    for ( auto i : scores){
            std::cout << "value  : " << i << std::endl;       
    }


    return 0;
}