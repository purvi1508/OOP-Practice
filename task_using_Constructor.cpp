#include <iostream>
#include <cmath>
using namespace std;

class Point; 

class Distance {
public:
    Distance(Point p1, Point p2);
};

class Point {
    int a, b;
    friend class Distance;

public:
    Point(int x, int y) {
        a = x;
        b = y;
    }
};

Distance::Distance(Point p1, Point p2) {
    int x = pow((p1.a - p2.a), 2);
    int y = pow((p1.b - p2.b), 2);
    double dist = sqrt(x + y);
    cout << "Distance between points: " << dist << endl;
}

int main() {
    // Create two Point objects
    Point point1(1, 2);
    Point point2(4, 6);

    // Calculate and display the distance between them using the Distance class
    Distance distObj(point1, point2);

    return 0;
}
