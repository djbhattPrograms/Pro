#include <iostream>
using namespace std;
int add(int a, int b) // formal parameter
{
    return a + b;
}

void address_swap(int *a, int *b)
{
    int temp;
    temp = (*a);
    (*a) = (*b);
    (*b) = temp;
}

void referance_swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    // calling by value

    // mainly used to do computation and show of the results and not doing changes in the main() functions
    int num1 = 10, num2 = 20, sum;
    sum = add(num1, num2);
    cout << sum << endl;

    // calling by address

    // doing changes indirectly on the main function
    int x = 10, y = 20;
    address_swap(&x, &y);
    cout << x << "," << y << endl;

    // calling by referance{{nickname of the actual parameter}}

    // making changes directly on the main function

    // it make the swap function in between the main function

    // main_func_some_code->swap_func_code->main_func_remaining_code

    int z = 10, c = 20;
    referance_swap(z,c);
    cout << z << "," << c << endl;

    return 0;
}