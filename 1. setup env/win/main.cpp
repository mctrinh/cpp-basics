#include <iostream>

int main(){
    auto result = (10 <=> 20) > 0;
    std::cout << result << std::endl;
}

// tasks.json is only available when working on a workspace folder.
//            is not available when editing single files.