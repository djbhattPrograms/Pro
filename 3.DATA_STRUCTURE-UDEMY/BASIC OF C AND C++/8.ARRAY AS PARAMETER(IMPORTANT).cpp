#include <iostream>
using namespace std;
//taking the address of A
void print(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }
}

// creating a array on the heap
//" *creation " is storing the address of the array on the heap 
int *creation(int n)
{
    // int*p= (int*)malloc(n*sizeof(int));
    int *p = new int[n];
    for (int i = 0; i < n; i++)
    {
        p[i]=i+1;
    }
    return p;
}


int main()
{
    int A[] = {2, 4, 6, 8, 10};

    // By normal calling
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }

    // // By using function
    //Here A the Address of the Array
    print(A, 5);

    // creating a array through a function on the heap.

    int *ptr,sz=7;
    ptr=creation(sz); // *p is a pointer ,it is taken by *creation, and *ptr is a pointer pointing a pointer '*creation' so ptr is (*(*p))
    print(ptr,sz);
   

    return 0;
}

 