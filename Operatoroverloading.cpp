#include<iostream>
using namespace std;
class complexnumber{
    private:
    int real,imaginary;
    public:
    complexnumber(){
        real=0;
        imaginary=0;
    }
    complexnumber(int r,int i){
        real=r;
        imaginary=i;
    }
    void print(){
        cout<<real<<"+"<<imaginary<<"i"<<endl;
    }
    complexnumber operator+(complexnumber c1){
        complexnumber temp;
        temp.real=real+c1.real;
        temp.imaginary=imaginary+c1.imaginary;
        return temp;
    }
};
int main(){
    complexnumber c1(5,4);
    complexnumber c2(8,9);
    complexnumber c3;
    c3=c2+c1;
    c3.print();
}
