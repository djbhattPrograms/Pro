#include <iostream>
#include <stdlib.h>
using namespace std;
// size of pointer is constant for all datatypes.
struct Rectangle
{
    int length;
    int breadth;
};


int main()
{
    int a = 10;
    int *p; // declearation
    p = &a; // initiation
    cout << p << endl;
    cout << a << endl;
    cout << "BY USING POINTER WE PRINTED THE VALUE OF P " << *p << endl; // dereferances

    // int A[5] = {32, 3423, 521, 423, 43};

    // in a array don't use '&' for initialisation of the pointer.
    // int *q;
    // q=A; NO,"&" for the address0

    // dynamic allocation in the heap of the memory by c++ method
    int *q;
    q = new int[5];
    q[0] = 10;
    q[1] = 20;
    q[2] = 30;
    q[3] = 40;
    q[4] = 50;

    // dynamic allocation in the heap of the memory by c method

    int *t = (int *)malloc(5 * sizeof(int));
    t[0] = 100;
    t[1] = 200;
    t[2] = 300;
    t[3] = 400;
    t[4] = 500;

    cout << "BY USING new" << endl;
    for (int i = 0; i < 5; i++)
    {
        // here in the dereferance we can directly use the pointer variable in place of '*p'
        cout << q[i] << endl;
    }
    cout << "BY USING MALLOC" << endl;
    for (int i = 0; i < 5; i++)
    {
        // here in the dereferance we can directly use the pointer variable in place of '*p'
        cout << t[i] << endl;
    }

    delete[] q; //delete {{name}} =>for other datatypes
    free(p);

    return 0;
}