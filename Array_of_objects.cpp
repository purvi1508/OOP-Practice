#include <iostream>
#include <string>
using namespace std;

class Employee {
    int id; // Non-static member variable to store employee ID

public:
    void setId(void) {
        cin >> id; // Input the employee ID
    }
    void getId(void) {
        cout << "Employee ID: " << id << endl; // Display the employee ID
    }
};

int main() {
    Employee fb[100]; // An array of Employee objects with a capacity for 100 employees

    for (int i = 0; i < 4; i++) {
        fb[i].getId(); // Display the ID for the current employee in the array
        fb[i].setId(); // Set the ID for the current employee in the array
    }
}
