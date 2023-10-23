#include <iostream>
#include <string>
using namespace std;

class shop {
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initcounter(void) {
        counter = 0;
    }
    void setPrice(void);
    void displayPrice(void);
};

void shop::setPrice(void) {
    cout << "Enter the name of the item: ";
    cin >> itemId[counter];
    cout << "Enter the price of the item: ";
    cin >> itemPrice[counter];
    counter++;
}

void shop::displayPrice(void) {
    cout << "Items and Prices:" << endl;
    for (int i = 0; i < counter; i++) {
        cout << itemId[i] << ": " << itemPrice[i] << endl;
    }
}

int main() {
    shop dukan; // Create an instance of the shop class
    dukan.initcounter(); // Initialize the counter for the dukan object

    cout << "Dukan Menu:" << endl;
    cout << "1. Add item and price" << endl;
    cout << "2. Display prices" << endl;

    int choice;
    cout << "Enter your choice (1/2): ";
    cin >> choice;

    if (choice == 1) {
        dukan.setPrice(); // Call setPrice directly for the dukan object
    } else if (choice == 2) {
        dukan.displayPrice(); // Call displayPrice directly for the dukan object
    } else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}
