#include <iostream>
using namespace std;

class Student {
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student::set_roll_number(int r) {
    roll_number = r;
}

void Student::get_roll_number() {
    cout << roll_number;
}

class Exam : public Student {
protected:
    float Maths;
    float Physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam::get_marks() {
    cout << Maths << " " << Physics;
}

class Result : public Exam {
    float percentage;

public:
    void display(void) {
        get_roll_number();
        get_marks();
        cout << (Maths + Physics) / 2;
    }
};

void Exam::set_marks(float m1, float m2) {
    Maths = m1;
    Physics = m2;
}

int main() {
    Result purvi;
    purvi.set_roll_number(420);
    purvi.set_marks(94.0, 90.0);
    purvi.display();
}

//The Student class is the base class with a protected roll_number and functions to set and get the roll number.

//The Exam class inherits from Student and adds protected Maths and Physics members for storing marks. It also has functions to set and get marks.

//The Result class inherits from Exam and introduces the display function that displays the roll number, marks, and the average percentage of marks.

//In the main function, we create an instance of the Result class, set the roll number and marks, and then call the display function to print the results.
