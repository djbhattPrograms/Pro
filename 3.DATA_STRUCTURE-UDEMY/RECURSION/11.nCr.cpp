// nCr=n!/r!(n-r)!

#include <iostream>
using namespace std;



int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return fact(n - 1) * n;
}
int c(int n, int r)
{
    int v1, v2, v3;
    v1 = fact(n);
    v2 = fact(r);
    v3 = fact(n - r);
    return v1/(v2*v3);
}


// using resursion
// follow the pascal triangle 
int crecurion(int n,int r){
    // r=0 and r=1 we have 1 if we follow the pascal triangle
    if (r==0||n==r)
    {
        return 1;
    }
    else{
        return crecurion(n-1,r-1)+crecurion(n-1,r);
    }
    
}



int main()
{
    cout<<c(5,2)<<endl;
    cout<<crecurion(5,2)<<endl;
    

    return 0;
}