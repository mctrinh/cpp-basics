#include <iostream>

int main(){
    
    // Precedence: which operation to do first
    // Associativity: which direction or which order

    int a {6};
    int b {3};
    int c {8};
    int d {9};
    int e {3};
    int f {2};
    int g {5};

    int result = a + b * c - d/e - f + g; // 6 + 24 - 3 + 5
    std::cout << "result : " << result << std::endl;

    result = a/b*c + d - e + f;     // 16 + 9 - 3 + 2
    std::cout << "result : " << result << std::endl;

    result = (a + b) * c - (d/e) - f + g;   // () done first, 72 - 3 - 2 + 5
    std::cout << "result () : " << result << std::endl;

    // Should clearly using () to indicate which operations you want done first

    return 0;
}