#include <iostream>
#include <bitset>

int main(){

    unsigned short int data {15};

    std::cout << sizeof(data) << std::endl; // 2 bytes

    std::cout << "data (dec) : " << std::showbase <<  std::dec << data << std::endl;
    std::cout << "data (oct) : " << std::showbase <<  std::oct << data << std::endl;
    std::cout << "data (hex) : " << std::showbase <<  std::hex << data << std::endl;
    std::cout << "data (bin) : " << std::bitset<16>(data) << std::endl;     // 16 bits = 2 bytes

    return 0;
}