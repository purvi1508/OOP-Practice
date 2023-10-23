#include <iostream>
#include <string>
using namespace std;

class Employee {
    int id;          // Non-static member variable to store employee ID
    static int count; // Static member variable to count the number of employees

public:
    void setData(void) {
        cin >> id;     // Input the employee ID
        count++;       // Increment the count of employees (static variable)
    }
    void getData(void) {
        cout << "Employee ID: " << id << " Total Employees: " << count << endl; // Display employee ID and the total number of employees
    }
};

int Employee::count; // Initializing the static member variable

int main() {
    Employee purvi, tanvi, saumya; // Creating three Employee objects

    purvi.setData(); // Set data for the 'purvi' employee
    purvi.getData(); // Display data for 'purvi' and the total count

    tanvi.setData(); // Set data for the 'tanvi' employee
    tanvi.getData(); // Display data for 'tanvi' and the total count

    saumya.setData(); // Set data for the 'saumya' employee
    saumya.getData(); // Display data for 'saumya' and the total count

    return 0;
}

//If we remove the static keyword from the count member variable, it will become a non-static member variable.
//In this case, each object (employee) will have its own count variable, and the count will not be shared among them. 
//Consequently, the output will not display the total count of all employees correctly because each object will have its own count,
//resulting in separate counts for each employee. Using static ensures that the count is shared among all objects of the class and correctly tracks the total number of employees.
