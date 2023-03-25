#include <iostream>

using namespace std;

int main()
{
    int number;
    cout<<"ENTER A NUMBER: ";
    cin>>number;
    int remainder,revnumber;
    while(number>0)
    {
        remainder=number%10;//oldnumber

        number=number/10;
        //new


        revnumber=(revnumber*10) + remainder;


    }
    cout << "REVERSE NUMBER : "<<revnumber << endl;
    return 0;
}
