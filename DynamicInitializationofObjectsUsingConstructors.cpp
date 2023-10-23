#include <iostream>
using namespace std;

class BankDeposit {
    int p;         // Principal amount
    int y;         // Number of years
    float r;       // Annual interest rate (in decimal)
    float reta;    // Final amount after interest

public:
    // Default constructor
    BankDeposit() {}

    // Constructor for specifying principle, year, and rate as float
    BankDeposit(int principle, int year, float rate);

    // Constructor for specifying principle, year, and rate as int
    BankDeposit(int principle, int year, int rate);

    // Method to calculate the final amount and display details
    void show();
};

// Constructor for specifying principle, year, and rate as float
BankDeposit::BankDeposit(int principle, int year, float rate) {
    p = principle;
    y = year;
    r = rate;
    reta = principle;
    for (int i = 0; i < year; i++) {
        reta = reta * (1 + r);
    }
}

// Constructor for specifying principle, year, and rate as int
BankDeposit::BankDeposit(int principle, int year, int rate) {
    p = principle;
    y = year;
    r = float(rate) / 100; // Convert rate to decimal
    reta = principle;
    for (int i = 0; i < year; i++) {
        reta = reta * (1 + r);
    }
}

// Method to display the details of the BankDeposit object
void BankDeposit::show() {
    cout << "Principal Amount: " << p << endl;
    cout << "Number of Years: " << y << endl;
    cout << "Final Amount: " << reta << endl;
}

int main() {
    BankDeposit bd1, bd2;
    int p, y;
    float r;
    int R;

    cout << "Enter the value of p, y, and r (as float): ";
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout << "Enter the value of p, y, and R (as int): ";
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();

    return 0;
}
