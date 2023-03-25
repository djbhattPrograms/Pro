#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int i;
    for( int num=a;num<b;i++ )
        {
        for(i=2;i<num; num++)

    {
        if(num%i==0)
        {

            break;
        }

    }



      if(i==num)
    {
        cout<<"num"<<endl;
    }
        }


    return 0;
}


