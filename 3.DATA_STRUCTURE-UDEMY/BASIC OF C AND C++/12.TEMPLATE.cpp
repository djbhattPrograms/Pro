#include <iostream>
using namespace std;
template <class T>
class Arithmetic
{
private:
    T a;
    T b;

public:
    Arithmetic(T a1, T b1);
    T add();
    T sub();
};
template <class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
    this->a = a;
    this->b = b;
}
template <class T>
T Arithmetic <T>::add()
{
    return a + b;
}
template <class T>
T Arithmetic<T>::sub()
{
    return a - b;
}
int main()
{
    Arithmetic<float> ar(45.76, 44.76);
    cout << ar.add() << endl;
    cout << ar.sub() << endl;

    return 0;
}