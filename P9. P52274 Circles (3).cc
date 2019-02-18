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
 
int relationship(const Circle& c1, const Circle& c2) {
    if ( (c1.radius+c2.radius) < dist(c1.center,c2.center) ) return 0;
    if (c2.radius >= c1.radius + dist(c1.center,c2.center) ) return 1;
    if (c1.radius >= c2.radius + dist(c1.center,c2.center) ) return 2;
    return 3;
}
 
void printRelation(const Circle& c1, const Circle& c2) {
    if (relationship(c1,c2)==0) cout<<"circles do not intersect"<<endl;
    else if (relationship(c1,c2)==1) cout<<"the first circle is inside the second one"<<endl;
    else if (relationship(c1,c2)==2) cout<<"the second circle is inside the first one"<<endl;
    else if (relationship(c1,c2)==3) cout<<"circles intersect"<<endl;
}
 
 
int main() {
    Circle c1,c2;
    cin>>c1.center.x>>c1.center.y>>c1.radius>>c2.center.x>>c2.center.y>>c2.radius;
    printRelation(c1,c2);
    double n;
    Point p;
    string s;
    while(cin>>n) {
        cin>>s;
        if (n==1) {
            if (s=="scale") {
                cin>>n;
                scale(c1,n);
            }
            else if (s=="move") {
                cin>>p.x>>p.y;
                move(c1,p);
            }
        }
        else if (n==2) {
            if (s=="scale") {
                cin>>n;
                scale(c2,n);
            }
            else if (s=="move") {
                cin>>p.x>>p.y;
                move(c2,p);
            }
        }
    printRelation(c1,c2);
    }
}
