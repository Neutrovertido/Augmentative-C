// Include libraries
#include <iostream>

int main() { // The main function
    // What the program actually does
    // The << operator works like a divisor for diferent instructions

    std::cout << "C++ is an interesting programming language\n"; //std is the print method, cout is Console OUT

    // Variables
    int value = 1;
    std::cout << "The value of the variable is: ";
    std::cout << value;
    std::cout << "\n";

    // Inputs
    std::cout << "Enter an integer value: ";
    std::cin >> value;
    std::cout << "The value you entered with +12 is: " << value + 12 << "\n";
    value += 12;

    // Conditionals
    if (value > 20) {
        std::cout << "It's greater than the 20th!\n";
    } else if (value == 0){
        std::cout << "It ain't it chief!\n";
    } else {
        std::cout << "The century is here, so c'mon dude!\n";
    }

    switch (value)
    {
    case 12:
        std::cout << "You know what you're doing my man!\n";
        break;
    
    default:
        break;
    }

    
}