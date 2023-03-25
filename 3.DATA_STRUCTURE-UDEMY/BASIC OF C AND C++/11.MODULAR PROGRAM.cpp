#include <iostream>
using namespace std;

int area(int length, int breadth)
{
    return length * breadth;
}
int perimeter(int length, int breadth)
{
    return 2 * (length + breadth);
}
int main()
{
    int length = 0, breadth = 0;
    cin >> length >> breadth;
    cout << area(length, breadth) << endl;
    cout << perimeter(length, breadth) << endl;
    return 0;
}