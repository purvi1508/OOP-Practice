//compiler default copy constructor har complier ko deta h 
#include <iostream>

class MyClass {
public:
    int value;

    // Default constructor
    MyClass() : value(0) {}

    // Parameterized constructor
    MyClass(int val) : value(val) {}

    // Copy constructor
    MyClass(MyClass &other) {
        value = other.value;
    }
};

int main() {
    // Create an object using the parameterized constructor
    MyClass obj1(42);

    // Use the copy constructor to create obj2 as a copy of obj1
    MyClass obj2(obj1);

    // Display the values of obj1 and obj2
    std::cout << "obj1.value: " << obj1.value << std::endl;
    std::cout << "obj2.value: " << obj2.value << std::endl;

    return 0;
}
