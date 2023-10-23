#include<iostream>
using namespace std;

class Complex{
    int a, b;
    friend Complex sumComplex(Complex o1, Complex o2); // Friend function declaration

public:
    void setNumber(int n1, int n2){
        a = n1;
        b = n2;
    }

    // Friend function to add two complex numbers
    friend Complex sumComplex(Complex o1, Complex o2);

    // Display the complex number
    void printNumber(){
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

// Friend function to add two complex numbers
Complex sumComplex(Complex o1, Complex o2){
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main(){
    Complex c1, c2, sum;

    // Set and display the first complex number
    c1.setNumber(1, 4);
    c1.printNumber();

    // Set and display the second complex number
    c2.setNumber(5, 8);
    c2.printNumber();

    // Call the friend function to add the two complex numbers and display the result
    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}
