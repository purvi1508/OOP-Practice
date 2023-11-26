#include<iostream>
#include<cmath>
using namespace std;

class Employee {
    protected:
    string name, employeeID;
    int base = 1000;

    public:
    virtual void calculateSalary() {
        cout << base;
    }

    virtual void displayDetails() {
        cout << "Employee ID: " << employeeID << ", Name: " << name << ", ";
    }
};

class HourlyEmployee : public Employee {
    int hsalary;

public:
    HourlyEmployee(string n, string id, int h) {
        name = n;
        employeeID = id;
        hsalary = h * 100;
    }

    void calculateSalary(){
        cout << "Hourly Employee Salary: " << hsalary;
    }

    void displayDetails(){
        Employee::displayDetails();
        cout << "Type: Hourly, ";
    }
};

class SalariedEmployee : public Employee {
    int msalary;

public:
    SalariedEmployee(string n, string id, int m) {
        name = n;
        employeeID = id;
        msalary = m * base;
    }

    void calculateSalary(){
        cout << "Salaried Employee Salary: " << msalary;
    }

    void displayDetails(){
        Employee::displayDetails();
        cout << "Type: Salaried, ";
    }
};

class CommissionedEmployee : public Employee {
    int csalary;
    float commissionRate;

public:
    CommissionedEmployee(string n, string id, int c, float rate) {
        name = n;
        employeeID = id;
        csalary = c * base;
        commissionRate = rate;
    }

    void calculateSalary(){
        cout << "Commissioned Employee Salary: " << csalary + (csalary * commissionRate);
    }

    void displayDetails(){
        Employee::displayDetails();
        cout << "Type: Commissioned, ";
    }
};

int main() {
    const int numEmployees = 3;
    Employee* employees[numEmployees];
    HourlyEmployee John("John", "E001", 40);
    SalariedEmployee Alice("Alice", "E002", 2);
    CommissionedEmployee Bob("Bob", "E003", 3, 0.1);
    employees[0] = &John; 
    employees[1] = &Alice;
    employees[2] = &Bob; 

    for (int i = 0; i < numEmployees; ++i) {
        employees[i]->displayDetails();
        cout << "Salary: ";
        employees[i]->calculateSalary();
        cout << endl;
    }

    for (int i = 0; i < numEmployees; ++i) {
        delete employees[i];
    }

    return 0;
}
