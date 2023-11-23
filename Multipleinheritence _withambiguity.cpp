#include<iostream>
using namespace std;
//base class 1
class A{
    public:
    void printmessage(){
        cout<<"A print message function"<<endl;
    }
};
//base class 2
class B{
    public:
    void printmessage(){
        cout<<"B print message function"<<endl;
    }
};
//derived class from A and B
class AB: public A, public B{
//void printmessage() are inherited from both A and B
//function overriding could be done here but we are to talk about the confusion created here
//printmessage()->A
//printmessage()->B expected ambiguity error
public:
    void printmessage(){
        B::printmessage();
        A::printmessage();
    }
};
int main(){
    AB obj;
    obj.printmessage();
}
