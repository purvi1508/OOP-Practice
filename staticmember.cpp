#include<iostream>
using namespace std;
class myclass{
    private:
    int x;
    static int count;
    public:
    myclass(){
        count++;
    }
    static int getcount(){
        return count;//can only return static memeber
    }
};
int myclass::count=0;
int main(){
    cout<<myclass::getcount()<<endl;
    myclass one;
    myclass two;
    myclass three;
    cout<<myclass::getcount()<<endl;
}
