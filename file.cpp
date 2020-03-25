// Include libraries
#include <iostream>
#include <vector>
#include <cmath>
#include "functions.hpp"
#include "functions.cpp"
// Use this to avoid typing std::something... using namespace std;

// To declare a function:
// return_type function_name(parameters) {instructions}
void say(std::string who, std::string msg) {
    std::cout << who << ": " << msg << "\n";
}

std::string degozaru(std::string phrase) {
    return phrase + "-degozaru";
}

// You can actually add a default value by assigning a value to num
// This works when you want to make an argument optional so that is not entered every single time
std::vector<int> quantum3(int num = 2) {
    std::vector<int> exit;
    for (int i=0; i<3; i++) {
        exit.push_back(pow(num, i));
    }
    return exit;
}

// You can also define the variable and later the instructions (See under the main() method)
double listAverage(std::vector<double> vec);

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

    // Functions
    std::cout << "The square root of 64 is: " << sqrt(64) << "\n";
    // To see how to define a function look above the main() method
    say("Gopnik","No u");

    std::string daPhrase = "Hello my fellow pirate";
    std::cout << degozaru(daPhrase) << "\n";
    std::cout << listAverage({5, 4, 7, 12}) << "\n";

    // This is actually the function that we declared in the external files
    int thisIsSumm = theSum(5, 7);
    std::cout << "The sum of 5 and 7 is: " << thisIsSumm << "\n";

    // This is the second case of the function that it's being used when we pass doubles instead of ints
    double decimalSum = theSum(3.65, 8.94);
    std::cout << "The decimal sum results in: " << decimalSum << "\n";

    // This one is declared in headers++ and is using inline
    bigMultiplication(12);

    // Template function
    std::cout << greater("Leo ", "Messi") << "\n";
    std::cout << greater(7, 14) << "\n";
    std::cout << greater(44.5, 86.7) << "\n";

    // Classes (see Headers)
    // . Notation (Remember to create an object)
    Computer pc;
    std::cout << pc.compute("123","121212") << "\n";
}

// See?
// And also you can define and/or declare functions on other files! 
double listAverage(std::vector<double> vec) {
    double average = 0.0;
    for (int i=0; i<vec.size(); i++){
        average = average + i;
    }
    average = average / vec.size();
    return average;

}