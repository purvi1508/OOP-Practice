#include<iostream>
using namespace std;

// Base class
class Base {
    int data1; // private by default and is not inheritable
    public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void Base::setdata(void) {
    data1 = 10;
    data2 = 20;
}

int Base::getdata1() {
    return data1;
}

int Base::getdata2() {
    return data2;
}

// Derived class inheriting publicly from Base
class derived: public Base {
    int data3;
    public:
    void process();
    void display();
};

void derived::process() {
    data3 = data2 * getdata1(); // Accessing data1 from the Base class
}

void derived::display() {
    cout << "Data1: " << getdata1() << endl;
    cout << "Data2: " << data2 << endl;
    cout << "Data3: " << data3 << endl;
}

int main() {
    derived der;
    //Mujhe data1 directly toh nhi derive hua but mujhe ek member function mil gaya jisse me usko access kar sakti hu
    // Setting data in the Base class
    der.setdata();

    // Processing data in the derived class
    der.process();

    // Displaying data from both Base and derived classes
    der.display();
}
