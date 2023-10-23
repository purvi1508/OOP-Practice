#include<iostream>
using namespace std;
//forward declaration
//ek class ke function ko dusri class ka friend banaya
class Complex;
class Calculator;

class Calculator {
public:
    int sum(int a, int b) {
        return (a + b);
    }

    // Friend function to calculate the real part of the sum of two complex numbers
    int realcomplex(Complex, Complex);

    // Friend function to calculate the imaginary part of the sum of two complex numbers
    int imagcomplex(Complex O1, Complex O2);
};
class Complex {
    int a, b;
    //Friend declaration for the Calculator class's realcomplex and imagcomplex functions
    //Individually declaring functions as friend
    friend int Calculator::realcomplex(Complex O1, Complex O2);
    friend int Calculator::imagcomplex(Complex O1, Complex O2);
    //Declaring a entire class as friend
    //friend class Calculator

public:
    void setNumber(int n1, int n2) {
        a = n1;
        b = n2;
    }

    void printNumber() {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator::realcomplex(Complex O1,Complex O2){
    return O1.a+O2.a;
}
int Calculator::imagcomplex(Complex O1,Complex O2){
    return O1.b+O2.b;
}

int main() {
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    Calculator calc;
    
    // Calculate and display the real and imaginary parts of the sum
    int realPart = calc.realcomplex(o1, o2);
    int imagPart = calc.imagcomplex(o1, o2);
    
    cout << "Real Part: " << realPart << endl;
    cout << "Imaginary Part: " << imagPart << endl;
    
    return 0;
}



