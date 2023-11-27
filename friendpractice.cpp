//Design a class representing a 2D point.
//Define friend functions to calculate the distance between two points (using distance formula) 
//and the midpoint of two points.
#include<iostream>
#include<cmath>
using namespace std;

class twod {
private:
    int x, y;

public:
    twod(int i, int j) {
        x = i;
        y = j;
    }
    int givex(){
        return x;
    }
    int givey(){
        return y;
    }
    friend double distance(twod& d1, twod& d2);
};

double distance(twod &d1, twod &d2) {
    int x_new = pow((d1.x - d2.x), 2);
    int y_new = pow((d1.y - d2.y), 2);
    return sqrt(x_new + y_new);
}

int main() {
    twod d1(5, 6);
    twod d2(8, 9);
    cout << distance(d1, d2);
}
