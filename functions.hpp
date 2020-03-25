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