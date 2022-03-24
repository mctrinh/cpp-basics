#include <iostream>
#include <string>

/* 
    <std::cout> print data to the console (terminal)
    <std::cin>  read data from the terminal
    <std::cerr> print errors to the console
    <std::clog> print log messages to the console
*/

int main(){

    /*
    // Printing data
    std::cout << "Hello C++20 " << std::endl;
    
    int age{30};
    
    std::cout << "Age : " << age << std::endl;
    std::cerr << "Error message : Something is wrong" << std::endl;
    std::clog << "Log message : Something happend " << std::endl;
    */


    /*
    // Read data from terminal
    int age1;
    std::string name;
    
    std::cout << "Please type your name and age : " << std::endl;
    // There should be no space in the name!
    //std::cin >> name;
    //std::cin >> age1;
    std::cin >> name >> age1;
    std::cout << "Hello " << name << " you are " << age1 << " year old!" << std::endl;
    */


    // Data with spaces
    std::string full_name;
    int age2;
    
    std::cout << "Please type your name and age : " << std::endl;
    std::getline(std::cin,full_name);
    
    std::cin >> age2;
    std::cout << "Hello " << full_name << " you are " << age2 << " year old!" << std::endl;

    return 0;
}

