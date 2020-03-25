// See the functions defined (not declared) in here, unless inline... see line 3
// Although this file is completely optional, is recommended to have it for a cleaner look at all functions
// The main use for this is to use the inline declaration, since it enhances in speed but lacks the flexibility of adding other file
int theSum(int num1, int num2);

// Inline declaration
inline void bigMultiplication (int num) {
    std::cout << "The big multiplication by using inline is: " << num * 100000 << "\n";
}

// Function overload
// Declaring a function more than one time allows to make functions with dynamic types
double theSum(double num1, double num2);

// Function templates
// It's a fancier and better form of assigning functions with different cases (at least with type differences)
template <typename T>
T greater (T val1, T val2) {
    val1 > val2 ? true: false;
}

// Classes
class Computer {
        // Variables stored in public do reset, the ones stored in private do not
        public: // Public scope
            // Define whatever functions or variables as you desire
            std::string compute(std::string value1, std::string value2) {
                std::string output = "Task has succesfully failed! Error code: " + value1 + " Please contact: " + value2 + "\n";
                return output;
            }

            void setBrand(std::string brand);
            std::string getBrand();

        private:
            std::string brand;
    }; // Semicolon says: Notice me!

// You can also create classes inside the headers
// This class will also hold a constructor
class Soil {
    public:
        // Constructor
        // Constructors are literally variables since they're everythin that doesn't have a return type
        Soil(std::string comp);

        std::string getComposition();

        // Destructor
        ~Soil();
    private:
        std::string composition;
};
// Constructor in functions.cpp