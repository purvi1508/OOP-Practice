#include <iostream>
#include <string>
using namespace std;
//static function banaye jate h jo ki sare ke sare static variables ko hi access kar sake
//kabhi kabhi h, aisa function banana chahte h jo ki class ke nam se run hojoaye usko kisi object ki jarurat na pade 
//run hone ke liye
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
    static void getcount(void){
        //cout<<id throws an error because it can only be used with static variables
        cout<<count;
    }
};
//count is the static data member of employee
int Employee::count; // Initializing the static member variable

int main() {
    Employee purvi, tanvi, saumya; // Creating three Employee objects

    purvi.setData(); // Set data for the 'purvi' employee
    purvi.getData(); // Display data for 'purvi' and the total count
    Employee::getcount();

    tanvi.setData(); // Set data for the 'tanvi' employee
    tanvi.getData(); // Display data for 'tanvi' and the total count
    Employee::getcount();

    saumya.setData(); // Set data for the 'saumya' employee
    saumya.getData(); // Display data for 'saumya' and the total count
    Employee::getcount();

    return 0;
}
