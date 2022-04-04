#include <iostream>

int main(){

    // Declare an array of ints
    int scores [10]; // An array storing 10 integers, junk data

    // Read data
    std::cout << std::endl;
    std::cout << "Reading out score values (manually) : " << std::endl;
    std::cout << " scores [0] : " << scores[0] << std::endl;   // Array starts indexing from 0
    std::cout << " scores [1] : " << scores[1] << std::endl;
   

    // Read with a loop
    for( size_t i {0} ; i < 10 ; ++i){
        std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
    }
    

    // Writing data in an array
    scores[0] = 20;
    scores[1] = 21;
    scores[2] = 22;
    //Print the data out
    for( size_t i {0} ; i < 10 ; ++i){
        std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
    }


   // Write data in array in a loop
   for(size_t i{0}; i < 10 ; ++i){
       scores[i] = i * 10;
   }
    // Print the data out
    for( size_t i {0} ; i < 10 ; ++i){
        std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
    }
    


    // Declare and initialize at the same time

	double salaries[5] {12.7, 7.5, 13.2, 8.1, 9.3};
	
	for(size_t i{0}; i < 5; ++i){
		std::cout << "salary[" << i << "] : " << salaries[i] << std::endl;
	}
  


    // If you don't initialize all the elements, those you leave out
    // are initialized to 0
    
    int families[5] {12, 7, 5};

	for(size_t i{0}; i < 5; ++i){
		std::cout << "families[" << i << "] : " << families[i] << std::endl;
	}
    


   	// Omit the size of the array at declaration
    int class_sizes[] {10,12,15,11,18,17,23,56}; 
	
	// Will print this with a range based for loop
	for(auto value : class_sizes){
		std::cout << "value : " << value << std::endl;
	}



   // Read only arrays (constant arrays)
   const int birds[] {10,12,15,11,18,17,23,56}; 
   // birds[2] = 8; // Error: can't change elememts of a const array



    // Sum up scores array, store result in sum

    int sum {0};
    
    for( int element : scores){
        sum += element;
    }
    std::cout << "Score sum : " << sum << std::endl;

    return 0;
}