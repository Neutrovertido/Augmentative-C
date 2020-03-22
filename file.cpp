// Include libraries
#include <iostream>
#include <vector>

int main() { // The main function
    // What the program actually does
    // The << operator works like a divisor for diferent instructions

    std::cout << "C++ is an interesting programming language\n"; //std is the print method, cout is Console OUT

    // Variables
    int value = 1;
    std::cout << "The value of the variable is: ";
    std::cout << value;
    std::cout << "\n";
    bool somethingwewilluselater = true;

    // Inputs
    std::cout << "Enter an integer value: ";
    std::cin >> value;
    std::cout << "The value you entered with +12 is: " << value + 12 << "\n";
    value += 12;

    // Conditionals
    // Operators that surprisingly are still here: &&, ||, !
    // For the operators you can actually use the words: and, or, not
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

    // Loops
    while (value > 0) 
    {
        std::cout << "This is the " << value << " time that this goes on!\n";
        value--;
    }

    for (int i=0; i<20; i++) {
        std::cout << "This is the " << i << " time that this will go on!\n";
    }
    
    // Vectors
    // .push_back()
    // .pop_back()
    // .size()

    std::vector<int> even = {2, 4, 6, 8, 10};

    even.push_back(12);

    std::cout << even[1] << "\n" << even.size() << "\n";

}