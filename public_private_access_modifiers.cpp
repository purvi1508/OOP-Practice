#include <iostream>
#include <string>
using namespace std;

//the class animal is created 
class Animal {
private:
    string name; 
public:
    // Public member variables
    string species;
    int age;
    void setName(string animalName) {
        name = animalName;
    }
    string getName() {
        return name;
    }
    // Public member function to display information about the animal
    void displayInfo() {
        cout<< "Name: "<<name<<endl;
        cout<< "Species: " <<species<<endl;
        cout<< "Age: " <<age <<"years"<<endl;
    }
};

int main() {
    // Create objects of the Animal class
    Animal lion;
    Animal elephant;

    // Access public members and call public member functions
    lion.setName("Leo");
    lion.species = "Lion";
    lion.age = 8;
    lion.displayInfo();

    cout <<endl;

    elephant.setName("Ellie");
    elephant.species = "Elephant";
    elephant.age = 15;
    elephant.displayInfo();

    // Private members cannot be accessed directly from outside the class
    // Uncommenting the following line will result in a compilation error
    //cout <<lion.name <<endl;
    //member "Animal::name" (declared at line 6) is inaccessibleC/C++(265
    return 0;
}
