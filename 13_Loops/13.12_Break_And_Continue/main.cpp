#include <iostream>

int main(){

    // break and continue : for loops
    const size_t COUNT{20};
    for(size_t i{0}; i < COUNT; ++i){   // i in local for loop
        if(i==5)
            continue;   // Don't print 5, do ++i now
        if(i == 11)
            break;      // Go out of the loop
        std::cout << "i : " << i << std::endl;  // Print until 10
    }
    std::cout << "Loop done!" << std::endl;


   // break and continue : while loop
   size_t i{0};     // i in main() scope
   while (i < 20){
       if(i==5){
            ++i;
            continue;   // Don't print 5, do ++i now
       }
     if(i==11)
        break;          // Go out of the loop
        std::cout << "i : " << i << std::endl;
        ++i;
   }
   std::cout << "Loop done!" << std::endl;


  // break and continue : do while loop
  i = 0;  // Re-assigned, don't need to re-define

  do{
      if(i==5){
            ++i;
            continue;   // Don't print 5, do ++i now
       }

     if(i==11)
        break;          // Go out of the loop

        std::cout << "i : " << i << std::endl;
        ++i;

  }while(i <20);


    return 0;
}
