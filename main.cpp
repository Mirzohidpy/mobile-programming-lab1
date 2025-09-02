// Mirzohid Abdurazzoqov  220084
// Tuesday 9:00 

// Main Function
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    cout << "Number of arguments received: " << argc << endl;

    cout << "Arguments are:" << endl;
    for (int i = 0; i < argc; ++i) {
        // argv[0] is always the name of the program itself
        cout << "Argument " << i << ": " << argv[i] << endl;
    }

    // return 0 = successful execution
    return 0;
}

// Q2 Answer: 
// In C++ main fucntion always starts program execution. 
// In Java main is writen as 'public static void main(String[] args)'. 
// The 'static' thing allows Java Virtual Machine to call it without creating an object of the class. (Used GPT for clarification)
// That makes program execution can start directly.


// Q3 Answer:
// C++: 
//   1. Return type: int (exit status)
//   2. Parameters: argc (argument count), argv[] (argument values)
//   3. There is no access modifiers (C++ programs start here directly)
//
// Java: 
//   1. Return type: void
//   2. Parameters: array of Strings (command-line arguments)
//   3. Access modifiers: public (accessible by JVM), static (called without object)


// Q4 Answer:
// In C++ the integer return value from main is the program's exit status. 
// 0 means successful execution. Non-zero means an error termination.
//
// In Java main is void and doesn't return a value. 
// For non-zero exit status we use System.exit(code).




