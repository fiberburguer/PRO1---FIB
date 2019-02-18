#include <iostream>
#include <cmath>
using namespace std;
 
struct Point {
    double x, y;
};
struct Circle {
    Point center;
    double radius;
};
 
double dist(const Point& a, const Point& b) {
    return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
}
 
void move(Point& p1, const Point& p2) {
    p1.x = p1.x + p2.x;
    p1.y = p1.y + p2.y;
}
void move(Circle& c, const Point& p) {
    c.center.x = c.center.x + p.x;
    c.center.y = c.center.y + p.y;
}
 
void scale(Circle& c, double sca) {
    c.radius = c.radius * sca;
}
 
bool is_inside(const Point& p, const Circle& c) {
    return dist(c.center,p)<=c.radius;
}
