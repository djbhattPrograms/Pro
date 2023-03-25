#include <iostream>
#include <string>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};
struct student
{
    string Enrollment;
    string name;
    string dept;
};
int main()
{
    struct Rectangle r={34,56};
    // r.length = 34;
    // r.breadth = 56;
    cout << "Area:" << r.length * r.breadth << endl;

    struct student s;
    s.Enrollment = "21uee014";
    s.name = "Debraj Bhattacharjee";
    s.dept = "Electrical Engineering";

    cout<<"Student Record:\n\tName:"<<s.name<<"\n\tEnrollment No.:"<<s.Enrollment<<"\n\tDepartment:"<<s.dept<<endl;

    return 0;
}