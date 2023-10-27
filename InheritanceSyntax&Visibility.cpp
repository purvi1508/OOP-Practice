#include<iostream>
using namespace std;

// Base class
class Employee {
    float salary; // Private member: salary
    public:
    int id; // Public member: id

    // Parameterized constructor for Employee class
    Employee(int inpd) {
        id = inpd;
        salary = 34.0; // Initializing the private member salary
    }

    // Default constructor for Employee class
    Employee() {};
};

// Derived class Programmer inheriting from Employee
class Programmer: Employee {
    public:
    int languagecode = 9; // Public member: languagecode

    // Parameterized constructor for Programmer class
    Programmer(int inpd) {
        id = inpd; // Inherited public member id from Employee
    }
};

int main() {
    Employee harry(1), rohan(2); // Creating Employee objects with IDs

    // The Programmer class inherits the id member from Employee class,
    // but it's a public member, so it's accessible in main.

    // Note: The salary member of the Employee class is private, so it's not accessible in the main function or in the Programmer class.
}
