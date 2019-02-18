#include <iostream>
#include <cmath>
using namespace std;
struct Point {
    double x, y;
};
double dist(const Point& a, const Point& b) {
    return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
}
