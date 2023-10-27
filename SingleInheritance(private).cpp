#include<iostream>
using namespace std;

class Base
{
    int data1;//private by default and is not inheritable
    public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void Base:: setdata(void){
    data1=10;
    data2=20;
}
int Base:: getdata1(){
    return data1;
}
int Base:: getdata2(){
    return data2;
}
class derived: private Base{//class is being derived publicly
    int data3;
    public:
    void process();
    void display();
};
void derived:: process(){
    setdata();
    data3=data2*getdata1();
}
void derived:: display(){
    cout<<getdata1();
    cout<<data2;
    cout<<data3;
}
int main(){
    derived der;
    //der.setdata();
    der.process();
    der.display();
}
