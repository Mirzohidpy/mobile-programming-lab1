// Mirzohid Abdurazzoqov  220084
// Tuesday 9:00 

// 1. Main Function
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
 

// 2. Variables
#include <iostream>
int main () {
    int b = 20;
    int a = 10;
    std :: cout << " Before swap : a = " << a << ", b = " << b << std :: endl ;

 // Swapping using arithmetic operations . This logic works in both C++ and Java .
    a = a + b ; // a becomes 30
    b = a - b ; // b becomes 10 (30 - 20)
    a = a - b ; // a becomes 20 (30 - 10)

    std :: cout << " After swap : a = " << a << ", b = " << b << std :: endl ;

    return 0;
}

// Q2 Answer:
// 1. Primitive stores actual value (int, double), stack memory.
// 2. Reference stores address of object/pointer, object in heap.


// Q3 Answer:
// 1. Local inside function, temporary.
// 2. Class-level fields in class, exist with object.
// 3. Static shared across all objects.

// Q4 Answer:
// 1. Static type checked at compile time. C++ and Java
// 2. Dynamic type checked at runtime. Python and JS


// 3. Control flow

#include <iostream>

int main () {
    int n1 = 0 , n2 = 1 , nextTerm = 0;

    std :: cout << " First 10 Fibonacci numbers : ";

    for ( int i = 1; i <= 10; ++ i ) {
        if( i == 1) {
            std :: cout << n1 << " ";
            continue;
        }
        if( i == 2) {
            std :: cout << n2 << " ";
            continue ;
        }
        nextTerm = n1 + n2 ;
        n1 = n2 ;
        n2 = nextTerm ;

        std :: cout << nextTerm << " ";
    }
    std :: cout << std :: endl ;

    return 0;
 }

// Q2 Answer:
// 1. while checks condition first.
// 2. do-while runs at least once, checks condition after.


// Q3 Andswer:
// 1. switch main control.
// 2. case reviews to match.
// 3. break exits switch.
// 4. default runs if no case matches.


// Q3 Answer:
// 1. && stops if first is false.
// 2. || stops if both is false.
// 3. Example:
// if (user != nullptr && user->isActive) {
//    cout << "Welcome back!" << endl;
// }


// 4. Functions Methods

#include <iostream>
#include <string>
#include <algorithm> // For std::equal

bool isPalindrome(const std::string &str) {
    // An elegant way is to compare the first half with the reverse of the second half.
    return std::equal(str.begin(), str.begin() + str.size() / 2, str.rbegin());
}

int main() {
    std::cout << "madam is palindrome? "
              << (isPalindrome("madam") ? "true" : "false") << std::endl;

    std::cout << "hello is palindrome? "
              << (isPalindrome("hello") ? "true" : "false") << std::endl;

    return 0;
}


// Q2 Answer:
// C++ pass-by-value, pass-by-pointer, pass-by-reference.
// Java always pass-by-value, but object refs are passed by value.


// Q3 Answer:
// Overloading is the same function name and different params.
// It must differ in parameter type/number.


// Q4 Answer:
// Recursioni is function calling itself.
// Base case stops recursion and it avoids infinite loop/stack overflow.



// 5. Comments

#include <iostream>

/**
 * @brief This is a documentation-style comment (Doxygen format).
 * It explains the purpose of the main function.
 * @return int Exit status of the program.
 */
int main() {
    // This is a single-line comment.
    int x = 5; // Useful for explaining a specific line.

    /*
     This is a multi-line comment.
     It can span several lines and is useful for
     longer explanations.
    */
    std::cout << "Comments provide context." << std::endl;

    return 0;
}

// Q2 Answer:
// Comments helpful others understand our code. It is important when we work in teamwork and long-term projects.


// Q3 Answer:
// I haven't used them, but they auto-generate docs from comment and make APIs easier to read and maintain. (By research)


// Q4 Answer:
// If we write a clear code it reduces need for comments. But still comments useful for complex logic or business rules as I said in teamwork.



// 6. Classes

#include <iostream>

class BankAccount {
private:
    double balance;

public:
    // Constructor to initialize the balance
    BankAccount(double initialBalance) {
        if (initialBalance >= 0) {
            balance = initialBalance;
        } else {
            balance = 0;
        }
    }

    // Method to add money to the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    // Method to view the current balance
    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount myAccount(100.50);
    std::cout << "Initial balance: " << myAccount.getBalance() << std::endl;

    myAccount.deposit(50.25);
    std::cout << "Balance after deposit: " << myAccount.getBalance() << std::endl;

    return 0;
} 


// Q2 Answer:

// Q3 Answer:

// Q4 Answer:


// 7. Enums

#include <iostream>
#include <string>

enum class Season {
    SPRING,
    SUMMER,
    AUTUMN,
    WINTER
};

std::string recommendActivity(Season currentSeason) {
    switch (currentSeason) {
        case Season::SPRING: return "Plant flowers";
        case Season::SUMMER: return "Go to the beach";
        case Season::AUTUMN: return "Rake leaves";
        case Season::WINTER: return "Build a snowman";
        default: return "Rest";
    }
}

int main() {
    Season now = Season::AUTUMN;
    std::cout << "It's autumn! Let's: " << recommendActivity(now) << std::endl;
    return 0;
}


// Q2 Answer:

// Q3 Answer:

// Q4 Answer:


// 8. Inheritance

#include <iostream>

// Base class (Superclass)
class Vehicle {
public:
    void startEngine() {
        std::cout << "Engine has started." << std::endl;
    }
};

// Derived class (Subclass)
class Car : public Vehicle {
public:
    void drive() {
        std::cout << "The car is moving." << std::endl;
    }
};

int main() {
    Car myCar;
    myCar.startEngine(); // Inherited from Vehicle
    myCar.drive();       // Defined in Car
    return 0;
}


// Q2 Answer:

// Q3 Answer:

// Q4 Answer:


// 9. Mixins (in Flutter, Multiple Inheritance in C++) and Interfaces

#include <iostream>
#include <string>

// A base class that must be implemented by anything that wants to be printable
class IStringable {
public:
    virtual std::string toString() const = 0;
    virtual ~IStringable() = default; // virtual destructor
};

// "Mixin" class that provides functionality to any IStringable
class Printable {
public:
    void print(const IStringable& obj) {
        std::cout << obj.toString() << std::endl;
    }
};

// Book must implement the IStringable contract
class Book : public IStringable {
private:
    std::string title;
    std::string author;
public:
    Book(std::string t, std::string a) : title(t), author(a) {}

    std::string toString() const override {
        return "'" + title + "' by " + author;
    }
};

int main() {
    Book myBook("The Hobbit", "J.R.R. Tolkien");
    Printable p;
    p.print(myBook); // Use the printable functionality on the book
    return 0;
}


// Q2 Answer:

// Q3 Answer:

// Q4 Answer:


// 10. Polymorphism

#include <iostream>
#include <vector>
#include <memory> // For std::unique_ptr

class Shape {
public:
    virtual double getArea() const = 0; // Pure virtual function
    virtual ~Shape() = default;         // Virtual destructor
};

class Rectangle : public Shape {
    double w, h;
public:
    Rectangle(double width, double height) : w(width), h(height) {}
    double getArea() const override { return w * h; }
};

class Circle : public Shape {
    double r;
public:
    Circle(double radius) : r(radius) {}
    double getArea() const override { return 3.14159 * r * r; }
};

int main() {
    std::vector<std::unique_ptr<Shape>> shapes;
    shapes.push_back(std::make_unique<Rectangle>(10, 5));
    shapes.push_back(std::make_unique<Circle>(3));

    for (const auto& shape : shapes) {
        // The correct getArea() is called based on the actual object type
        std::cout << "Area: " << shape->getArea() << std::endl;
    }

    return 0;
}


// Q2 Answer:

// Q3 Answer:

// Q4 Answer:


// 11. Async Operations

#include <iostream>
#include <future>
#include <numeric> // For std::accumulate

long long calculateSum() {
    long long sum = 0;
    for (long long i = 1; i <= 1000000000; ++i) {
        sum += i;
    }
    return sum;
}

int main() {
    std::cout << "Main thread: Starting calculation..." << std::endl;

    // std::async launches the task, returning a std::future
    std::future<long long> sumFuture = std::async(std::launch::async, calculateSum);

    std::cout << "Main thread: Waiting for result..." << std::endl;

    // .get() blocks until the future has a value and returns it
    long long result = sumFuture.get();

    std::cout << "Main thread: The calculated sum is: " << result << std::endl;

    return 0;
}


// Q2 Answer:

// Q3 Answer:

// Q4 Answer:


// 12. Exceptions

#include <iostream>
#include <stdexcept> // For std::invalid_argument

void processAge(int age) {
    if (age < 0) {
        throw std::invalid_argument("Age cannot be negative.");
    }
    std::cout << "Age processed successfully: " << age << std::endl;
}

int main() {
    int userAge = -5;
    try {
        std::cout << "Processing age: " << userAge << std::endl;
        processAge(userAge);
    }
    catch (const std::invalid_argument& e) {
        // Catches the specific exception type
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::cout << "Program continues." << std::endl;
    return 0;
}



// Q2 Answer:

// Q3 Answer:

// Q4 Answer: