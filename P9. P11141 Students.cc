#include <iostream>
#include <vector>
using namespace std;
struct Student {
    int idn;
    string name;
    double mark;        // The mark is a value between 0 and 10, or -1 that represents NP
    bool repeater;
};
void information(const vector<Student>& stu, double& min, double& max, double& avg) {
    int repeaters=0;
    bool first=true;
    for (int i=0; i<stu.size(); ++i) {
        if (stu[i].repeater or stu[i].mark==-1) ++repeaters;
        else {
            if (first) {
                min=stu[i].mark;
                max=stu[i].mark;
                avg=stu[i].mark;
                first=false;
            }
            else avg = avg + stu[i].mark;
            if (stu[i].mark<min) min=stu[i].mark;
            if (stu[i].mark>max) max=stu[i].mark;
        }
    }
    if (repeaters==stu.size()) {
        min=-1;
        max=-1;
        avg=-1;
    }
    else avg = avg /(stu.size()-repeaters);
}
