#include<iostream>
using namespace std;
// tail recursion 
void fun1(int n){
    if (n>0)
    {
        cout<<n<<endl;
        fun1(n-1);
    }
}
//head recursion
void fun2(int n){
    if (n>0)
    {
        fun2(n-1);
        cout<<n<<endl;
    }
    
}
int main(){
    int x=3;
    cout<<"Tail Recursion"<<endl;
    fun1(x);
    cout<<"Head Recursion"<<endl;
    fun2(x);

    
    return 0;
}