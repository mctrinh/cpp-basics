#include <iostream>

int main(){
    
    // Braced initializers
    // Variable may contain random garbage value. WARNING
    int elephant_count; // A random int number

    int lion_count{}; // Initializes to 0

    int dog_count{10}; // Initializes to 10

    int cat_count{15}; // Initializes to 15

    // Can use expression as initializer
    int domesticated_animals{ dog_count + cat_count };

    // Use undefined number
    //int new_number{doesnt_exist};

    // Store a fractional number in an empty variable, can not compile
    //int narrowing_conversion {2.9};

    std::cout << "Elephant count : " << elephant_count << std::endl;
    std::cout << "Lion count : " << lion_count << std::endl;
    std::cout << "Dog count : " << dog_count << std::endl;
    std::cout << "Cat count : " << cat_count << std::endl;
    std::cout << "Domesticated animal count : " << domesticated_animals << std::endl;

    // Functional Initialization
    int apple_count(5);
    int orange_count(10);
    int fruit_count(apple_count + orange_count);

    //int bad_initialization ( doesnt_exist3 + doesnt_exist4 );

    // Information lost. Less safe than braced initializers, can compile with chop-off value
    int narrowing_conversion_functional (2.9);

    std::cout << "Apple count : " << apple_count << std::endl;
    std::cout << "Orange count : " << orange_count << std::endl;
    std::cout << "Fruit count : " << fruit_count << std::endl;
    std::cout << "Narrowing conversion : " << narrowing_conversion_functional << std::endl;

    return 0;
}