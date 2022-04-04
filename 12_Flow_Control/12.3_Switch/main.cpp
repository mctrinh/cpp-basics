#include <iostream>
#include <string>

// Tools
const int Pen{ 10 };
const int Marker{ 20 };
const int Eraser{ 30 };
const int Rectangle{ 40 };
const int Circle{ 50 };
const int Ellipse{ 60 };

int main(){

    int tool {Eraser};

    switch (tool)
    {
        case Pen : {
             std::cout << "Active tool is Pen" << std::endl;
        }
        break; // stop processing the switch block when a successful case has been found

        case Marker : {
             std::cout << "Active tool is Marker" << std::endl;
        }
        break;

        case Eraser : {
             std::cout << "Erase Shapes" << std::endl;
        }
        break;

        case Rectangle : {
             std::cout << "Drawing Rectangle" << std::endl;
        }
        break;

        case Circle : {
             std::cout << "Drawing Circle" << std::endl;
        }
        break;

        case Ellipse : {
             std::cout << "Active tool is Ellipse" << std::endl;
        }
        break;
          
        default: {
            std::cout << "No match found" << std::endl;     // default is matched when nothing has been matched 
        }
            break;
    }

    std::cout << "Moving on" << std::endl;

    /*
    // Condition can only be integer types and enums: int, long, unsigned short, etc, ...
     (We'll learn about enums later in the course)
    std::string name {"John"};
    switch (name) // Compiler error!
    */

    return 0;
}
