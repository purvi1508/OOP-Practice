#include <iostream>
using namespace std;

class Y; // Forward declaration of class Y

class X {
    int data;
    friend void add(X, Y); // Declare the add function as a friend of class X

public:
    void setdata(int val) {
        data = val; // Set the 'data' member of class X
    }
};

class Y {
    int data;
    friend void add(X, Y); // Declare the add function as a friend of class Y

public:
    void setdata(int val) {
        data = val; // Set the 'data' member of class Y
    }
};

// Friend function that calculates and prints the sum of 'data' from objects of class X and Y
void add(X o1, Y o2) {
    cout << "Sum of data from X and Y: " << o1.data + o2.data << endl;
}

int main() {
    X a; // Create an object of class X
    a.setdata(2); // Set the 'data' value for object a to 2

    Y b; // Create an object of class Y
    b.setdata(5); // Set the 'data' value for object b to 5

    // Call the 'add' function to calculate and print the sum of 'data' from objects a and b
    add(a, b);

    return 0;
}
