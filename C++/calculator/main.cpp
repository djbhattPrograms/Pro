#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "ENTER TWO NUMBERS"<<endl;
    int num1,num2;
    cin>>num1>>num2;
    char op;
    cout<<"ENTER A OPERATOR"<<endl;
    cin>>op;

    switch(op)
    {
    case'+':
        cout<<num1+num2<<endl;
        break;
    case'-':
        cout<<num1-num2<<endl;
        break;
    case'*':
        cout<<num1*num2<<endl;
        break;
    case'/':
        cout<<(float)num1/(float)num2<<endl;
        break;
    case'%':
        cout<<num1%num2<<endl;
        break;
    case'A':
     cout<<pow(num1,num2)<<endl;
     break;
    default:
        cout<<"ENTER ANOTHER OPERATOR"<<endl;


    }

    return 0;
}
