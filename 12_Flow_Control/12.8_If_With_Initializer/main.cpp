#include <iostream>

int main(){

	bool go {true};

	// speed is locally initialzed in if-loop, check bool go
	
	if(int speed {10};go){
        std::cout << "speed : " << speed << std::endl;
		
		if(speed > 5){
			std::cout << "Slow down!" << std::endl;
		}else{
			std::cout << "All good!" << std::endl;
		}
	}else{
        std::cout << "speed : " << speed << std::endl;
		std::cout << "Stop" << std::endl;
	}

    // std::cout << "Out of the if block , speed : " << speed << std::endl; // speed is undeclared outside the if-loop
    
    return 0;
}
