#include <iostream>
using namespace std;
class shape{
    public:
    virtual void getarea()=0;//no implementation in this class pure virtual function
};
class circle:public shape{
    public:
    void getarea(){
        int r;
        cout<<"enter radius: ";
        cin>>r;
        cout<<3.14*r*r;
    }
};
class rectangle:public shape{
    public:
    void getarea(){
        int b,h;
        cout<<"enter braedth: ";
        cin>>b;
        cout<<"enter height: ";
        cin>>h;
        cout<<b*h;
    }
};
void area(shape *temp){
    temp->getarea();
}
int main(){
    shape *temp;
    rectangle rect;
    temp=&rect;
    // rect.getarea();
    // circle c;
    // c.getarea();
    area(temp);
}
