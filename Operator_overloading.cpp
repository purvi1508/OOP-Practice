#include<iostream>
using namespace std;
class weight{
    private:
    int kg;
    public:
    weight(){
        kg=0;
    }
    weight(int x){
        kg=x;
    }
    void printweight(){
    cout<<"Weight is "<<kg<<endl;
    }
    weight operator ++ (){
        ++kg;
    }
    weight operator ++ (int){
        kg++;
    }
};
int main(){
    weight obj1;
    obj1.printweight();
    ++obj1;
    obj1.printweight();
    obj1++;
    obj1.printweight();
}
