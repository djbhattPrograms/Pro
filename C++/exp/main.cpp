#include <iostream>
#include<cmath>

using namespace std;


int main()
{
    int numbergrid[3][2]=
    {
    {0,3},
    {2,9},
    {3,1}};// 2d arrays

    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=1;j++)
        {
            cout<<numbergrid[i][j];
        }
        cout<<endl;//nested loops
    }








    return 0;
}
