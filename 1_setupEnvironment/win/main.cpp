#include <iostream>

int main(){
    auto result = (10 <=> 20) > 0;
    std::cout << result << std::endl;
    return 0;
}

// tasks.json is only available when working on a workspace folder.
//            is not available when editing single files.
// .vscode folder
/*
    task.json: build instructions
    launch.json: debugger settings
    c_cpp_properties.json: compiler path and IntelliSense settings
*/