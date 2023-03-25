#include <iostream>
#include<cmath>

using namespace std;
bool check(int x,int y,int z){
int A=max(x,(y,z));
int B;
int C;
if(A==x){
    B=y;
    C=z;
} else if (A==y){
B=x;
C=z;
}else{
B=x;
C=y;
}if(A*A==B*B+C*C){
return true;
}else{
return false;
}
}

int main()
{
   int x,y,z;
   cin>>x>>y>>z;
   if(check(x,y,z)){
    cout<<"pythagorean triplet";
   }else{
   cout<<"not pythagorean triplet";
   }
    return 0;
}
