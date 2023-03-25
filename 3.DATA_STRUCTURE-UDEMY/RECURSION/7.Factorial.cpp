#include <iostream>
using namespace std;

//similar dicussion that is mentioned in the "Sum of N nutural Number"

int factorialloops(int n)
{
    int fac = 1;
    for (int i = 1; i <= n; i++)
    {
        fac = fac * i;
    }
    return fac;
}
int factorialrecursion(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return factorialrecursion(n - 1) * n;
    }
}
int main()
{   cout<<"Function call due to loops"<<endl;
    cout<<factorialloops(5)<<endl;
    cout<<"Function call due to recursion"<<endl;
    cout << factorialrecursion(5) << endl;

    return 0;
}