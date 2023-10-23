#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Constructor with default values
    Person() {
        name = "John Doe";
        age = 30;
    }

    // Constructor with parameters
    Person(string n, int a) {
        name = n;
        age = a;
    }

    // Member function to display person's information
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    // Creating Person objects using constructors
    Person person1;  // Using the default constructor
    Person person2("Alice", 25);  // Using the parameterized constructor

    // Displaying information of the created persons
    cout << "Person 1:" << endl;
    person1.displayInfo();

    cout << "\nPerson 2:" << endl;
    person2.displayInfo();

    return 0;
}
