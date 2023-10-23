#include <iostream>
using namespace std;

class c2; 

class c1 {
    int val;
    friend void swap(c1&, c2&);

public:
    void indata(int a) {
        val = a;
    }

    void display(void) {
        cout << val << endl;
    }
};

class c2 {
    int val;
    friend void swap(c1&, c2&); 

public:
    void indata(int a) {
        val = a;
    }

    void display(void) {
        cout << val << endl;
    }
};

void swap(c1& a, c2& b) { 
    int temp = a.val;
    a.val = b.val;
    b.val = temp;
}

int main() {
    c1 a;
    a.indata(2);
    cout << "a: ";
    a.display();

    c2 b;
    b.indata(3);
    cout << "b: ";
    b.display();

    swap(a, b);

    cout << "a: ";
    a.display();
    cout << "b: ";
    b.display();

    return 0;
}
