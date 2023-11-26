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
    complexnumber operator + (complexnumber c1){
        complexnumber temp;
        temp.real=real+c1.real;
        temp.imaginary=imaginary+c1.imaginary;
        return temp;
    }
    complexnumber operator - (complexnumber c1){
        complexnumber temp;
        temp.real=real-c1.real;
        temp.imaginary=imaginary-c1.imaginary;
        return temp;
    }
    friend ostream& operator << (ostream& out, const complexnumber& c1) {
        out << c1.real << "+" << c1.imaginary << "i";
        return out;
    }

    friend istream& operator >> (istream& in, complexnumber& c1) {
        cout << "real: ";
        in >> c1.real;
        cout << "imaginary: ";
        in >> c1.imaginary;
        return in;
    }
};
int main(){
    complexnumber c1(5,4);
    complexnumber c2(8,9);
    complexnumber c3;
    c3=c2+c1;
    cout<<c3;
}
