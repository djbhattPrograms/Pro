#include <iostream>
using namespace std;
struct Rectangle
{
    int a[5];
    int length;
    int breadth;
};
void Area(struct Rectangle r1)
{
    cout << r1.breadth * r1.length << endl;
}
void change_length(struct Rectangle *p, int newlength)
{
    p->length = newlength;
    
}
//creating a struct Rectangle on the heap 
// by using 'ptr' pointer on the stack point the memory on the heap
struct Rectangle *func()
{
    struct Rectangle *ptr = new Rectangle;
    ptr->breadth=7;
    ptr->length=15;
    return ptr;
}

int main()
{
    struct Rectangle r = {10, 5};
    Area(r);
    change_length(&r, 20);
    Area(r);


    struct Rectangle *p=func();
    cout<<"length:"<<p->length<<endl<<"Breadth:"<<p->breadth<<endl;
    Area(*p);

    return 0;
}