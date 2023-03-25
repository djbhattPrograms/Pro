#include <iostream>
using namespace std;
struct rectangle
{
    int length;
    int breadth;
};
int main()
{
    struct rectangle r={10,6};
    struct rectangle *p=&r;
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;
    // using pointer 
    cout<<(*p).length<<endl;
    cout<<(*p).breadth<<endl;



    // dynamic allocation in the heap memory
    struct rectangle *p;
    //c
    p = (struct rectangle *)malloc(sizeof(struct rectangle));
    //c++
    p=new struct rectangle;
    p->breadth = 6;
    p->length = 10;
    cout << "Area: " << p->breadth * p->length << endl;

    return 0;
}