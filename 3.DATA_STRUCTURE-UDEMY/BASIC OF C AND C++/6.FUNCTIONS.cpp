#include <iostream>
using namespace std;
//fuction defination
int add(int a, int b)
{
    int c;
    c=a+b;
    return c;
}

int main()
{
    
    int num1=10;int num2=15;
    // function calling
    int sum=add(num1,num2);
    cout<<sum<<endl; 


    return 0;
}