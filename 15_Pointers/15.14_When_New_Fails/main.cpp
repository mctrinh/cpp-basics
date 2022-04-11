#include <iostream>

int main(){

    /*
    // new: creates and initialzes objects with dynamic storage duration
    int * data = new int[10000000000000000]; // 
    for(size_t i{0} ; i < 10000000 ; ++i){
        int * data = new int[100000000];
    }
    */


   //exception
   // try: allow to define a block of code to be tested for errors while it is being executed.
   // catch: allow to define a block of code to be executed, if an error occurs in the try block.
    for(size_t i{0} ; i < 100 ; ++i){
        try{
            int * data = new int[1000000000];
        }catch(std::exception& ex){
            std::cout << "  Something went wrong : " << ex.what() << std::endl;
        }
    }
    

   //std::nothrow
    for(size_t i{0} ; i < 100 ; ++i){
   
        int * data = new(std::nothrow) int[1000000000];

        if(data!=nullptr){
            std::cout << "Data allocated" << std::endl;
        }else{
            std::cout << "Data allocation failed" << std::endl;
        }
       
    }

    std::cout << "Program ending well" << std::endl;

    return 0;
}
