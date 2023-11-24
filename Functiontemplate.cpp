#include<iostream>
using namespace std;
//function overloading
// int add(int x,int y){
//     return (x+y);
// }
// float add(float x,float y){
//     return (x+y);
// }
// double add(double x,double y){
//     return (x+y);
// }
template <typename t>
t add(t x,t y){
    return x+y;
}
template <typename t,typename u>
u adding(t x,u y){
    return x+y;
}
int main(){
    cout<<add<double>(4.5,5.1)<<endl;
    cout<<adding<int,double>(4,6.7);
}
