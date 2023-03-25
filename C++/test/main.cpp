#include <iostream>

using namespace std;

int main()

{
    cout <<"THREE DIFFERENT NUMBER"<<endl;

    int a,b,c;
    cin>>a>>b>>c;



    if(a>b&&a>c)
    {
        cout<<"A IS MAXIMUM"<<endl;

    }
    else if(b>a&&b>c)
    {
        cout <<" B IS MAXIMUM "<<endl;
    }
    else
    {
     cout<<"C IS MAXIMUM" <<endl;
    }


    return 0;
}
