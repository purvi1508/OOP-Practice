#include <iostream>
using namespace std;
//base class
class Animal{
    public:
    virtual void eat(){
        cout<<"I am eating generic food";
    }
};
//derived class 1
class cat:public Animal{
    public:
    void eat(){
        cout<<"I am eating mouse";
    }
};
//derived class 2
class dog:public Animal{
    public:
    void eat(){
        cout<<"I am eating dog food";
    }
};
//stand alone function
void function1(Animal *xyz){
    xyz->eat();
}
int main(){
    Animal *ptr;
    cat catobj;
    dog dogobj; 
    ptr=&catobj;
    function1(ptr);
}
