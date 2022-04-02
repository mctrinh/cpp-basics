#include <iostream>

int main(){
    
	constexpr int SOME_LIB_MAJOR_VERSION {1237};
	
	constexpr int eye_count {2};
	
	constexpr double PI {3.14};

    // eye_count = 4;   // Can't modify a constant
	
	std::cout << "eye count : " << eye_count << std::endl;
	std::cout << "PI : " << PI << std::endl;


	//int leg_count {2}; // Non constexpr
	                    // leg_count is not known at compile time
	//constexpr int arm_count{leg_count}; // Error, leg_count (line 17) can't be used as const


	constexpr int room_count{10};
	constexpr int door_count{room_count};   // OK, as room_count is a const
	
	const int table_count{5};
	constexpr int chair_count {table_count * 5};    // Works, as table_count is a const


    //static_assert (SOME_LIB_MAJOR_VERSION == 123);    // Error, can't modify const

    //int age = 5;
    //static_assert (age == 5);     // Error, age is not a const

    std::cout << "App doing its thing..." << std::endl;

    return 0;
}