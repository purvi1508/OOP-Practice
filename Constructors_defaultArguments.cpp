#include <iostream>
using namespace std;

class simple{
    int data;
    int data2;
    public:
        simple(int a,int b=9){
            data=a;
            data2=b;
        }
        void printdata(void){
            cout<<data<<" "<<data2<<endl;
        }
};
int main() {
    simple s1(2,4);
    s1.printdata();
    //2 4
    simple s2(2);
    s2.printdata();
    //2 9
}
