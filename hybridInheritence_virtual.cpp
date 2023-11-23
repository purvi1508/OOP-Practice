// #include<iostream>
// using namespace std;
// //combining more than one kind of inheritence is hybrid inheritence
// class base{
//     protected:
//     int val;
// };
// class derived1:public base{
//     public:
//     derived1(){
//         val=1;
//     }
//     void getvalues(){
//         cout<<"The value from derived1 is"<<val;
//     }
// };
// class derived2:public base{
//     public:
//     derived2(){
//         val=2;
//     }
//     void getvalues(){
//         cout<<"The value from derived2 is"<<val;
//     }
// };
// class derived3:public derived1,public derived2{
//     //2 coplies of val in derived 3
//     public:
//     void getvalues(){
//         derived1::getvalues();
//         derived2::getvalues();
//     }
// };
// int main(){
//     derived3 obj;
//     obj.getvalues();
// }
#include<iostream>
using namespace std;
//combining more than one kind of inheritence is hybrid inheritence
class base{
    protected:
    int val;
};
class derived1:virtual public base{
    public:
    derived1(){
        val=1;
    }
    void getvalues(){
        cout<<"The value from derived1 is"<<val;
    }
};
class derived2:virtual public base{
    public:
    derived2(){
        val=2;
    }
    void getvalues(){
        cout<<"The value from derived2 is"<<val;
    }
};
class derived3:public derived1,public derived2{
    //2 coplies of val in derived 3
    //rightmost inherited is the one whose data member is goind to come in derived 3
    public:
    void getvalues(){
        derived1::getvalues();
    }
};
int main(){
    derived3 obj;
    obj.getvalues();
}
