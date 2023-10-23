#include <iostream>
#include <string>
using namespace std;

class complex {
    int a;
    int b;

public:
    // Function to set the values of a and b for a complex number
    void setData(int v1, int v2) {
        a = v1;
        b = v2;
    }

    // Function to set the values of a and b by summing two complex numbers
    void setDatabySum(complex O1, complex O2) {
        a = O1.a + O2.a;
        b = O1.b + O2.b;
    }

    // Function to print the complex number in the format "a + ib"
    void print(void) {
        cout << a << " + i" << b;
    }
};

int main() {
    complex c1, c2, c3;

    // Set the values of c1 and c2 using setData
    c1.setData(1, 2);
    c2.setData(3, 4);

    // Set the values of c3 by summing c1 and c2 using setDatabySum
    c3.setDatabySum(c1, c2);

    // Print the complex numbers c1, c2, and c3
    cout << "Complex Number 1: ";
    c1.print();
    cout << endl;

    cout << "Complex Number 2: ";
    c2.print();
    cout << endl;

    cout << "Sum of Complex Number 1 and 2 (Complex Number 3): ";
    c3.print();
    cout << endl;

    return 0;
}
