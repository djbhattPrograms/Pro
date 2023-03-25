
// sum(n)=1+2+3+4+5.......+(n-1)+n
// sum(n)=sum(n-1)+n


//         |-
//         |  0      n=0
// sum(n)= | 
//         | sum(n-1)+n n>0
//         |-    
// Formula=> (n(n+1))/2


// Time Complexity=>

// 1) for loops->O(n);
// 2) for recursion->0(n) {{stack size (n+1)}}


// Space Complexity=>

// 1) for loops ->O(1);
// 2) for recursion->O(n); {{space size (n+1)}}




#include<iostream>
using namespace std;

int  sumLoop(int n){
    int sum=0;
    for ( int i = 1; i <= n; i++)
    {
        sum=sum+i;
    }
    return sum;
} 



int sumRecursion(int n){
    if (n==0)
    {
        return 0;
    }
    else
    {
        return sumRecursion(n-1)+n;
    }
    
}


int main(){
   cout<<sumRecursion(3)<<endl; 
   cout<<sumLoop(3)<<endl;
    return 0;
}