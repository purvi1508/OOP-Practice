#include <iostream>
using namespace std;
class mybaseclass{
    public:
    void show(){
        cout<<"show function called"<<endl;
    }
    virtual void print(){
        cout<<"print function called"<<endl;
    }
};
class Derived: public mybaseclass{
    void show(){
        cout<<"Derived show function called"<<endl;
    }
    virtual void print(){
        cout<<"Derived print function called"<<endl;
    }
};
int main(){
    mybaseclass *ptr;
    Derived derivedobj;
    ptr=&derivedobj;//pointer storing the address of derivedobj
    ptr->print();
    ptr->show();
}
