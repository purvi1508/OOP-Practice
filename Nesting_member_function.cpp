#include <iostream>
#include <string>
#include <cmath> // Include the cmath library for pow()
using namespace std;

class binary {
    string s; // Private member variable

public:
    void read(void);                 // Function to read a binary number
    void check_bin(void);            // Function to check if the input is a valid binary number
    void binaryToDecimal(void);      // Function to convert binary to decimal
};

void binary::read(void) {
    cout << "Enter a binary Number: ";
    cin >> s; // Accessing and modifying the private member 's' through the public function 'read'
}

void binary::check_bin(void) {
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) != '0' && s.at(i) != '1') {
            cout << "Incorrect: Entered number is not binary" << endl;
            exit(0);
        }
    }
}

void binary::binaryToDecimal(void) {
    int decimal = 0;
    int length = s.length();

    for (int i = 0; i < length; i++) {
        int bit = s.at(i) - '0'; // Accessing the private member 's' to convert a character to an integer
        int power = length - 1 - i; // Calculate the power of 2

        decimal += bit * pow(2, power); // Calculate the decimal value
    }

    cout << "Decimal Equivalent: " << decimal << endl;
}

int main() {
    binary num;
    num.read();        // Calling the read() function to input a binary number
    num.check_bin();   // Calling the check_bin() function to validate the binary input
    num.binaryToDecimal(); // Calling the binaryToDecimal() function to convert binary to decimal
    return 0;
}
