#include<iostream>
using namespace std;
class myclass{
    public:
    int x;
    static int count;
    myclass(){
        count++;
    }
};
int myclass::count=0;
int main(){
    cout<<myclass::count<<endl;
    myclass one;
    myclass two;
    myclass three;
    cout<<myclass::count<<endl;
}
//static works at class level not the object level
