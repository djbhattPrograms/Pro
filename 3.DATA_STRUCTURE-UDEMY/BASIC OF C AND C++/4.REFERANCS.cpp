#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    // referances delclearation and initialisation at the same time
    int &r = a;
    cout << a << endl;
    r++;
    cout << r << endl;
    cout << a << endl;
    cout << sizeof(r);
    // refreance variable name can't be change
    return 0;
}