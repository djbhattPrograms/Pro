#include<iostream>
using namespace std;
// for local variable n
int funLocal(int n){
    if (n>0)
    {
        return funLocal(n-1)+n;
    }
    return 0;
    
}
//for static Variable x
int funStatic(int n){
    static int x=0;
    if (n>0)
    {
        x++;
        return funStatic(n-1)+x;
    }
    return 0;
    
}
// for Global Variable
int global=0;
int funGlobal(int n){
    if (n>0)
    {
        global++;
        return funGlobal(n-1)+global;
    }
    return 0;
    
}
int main(){
    int L=funLocal(5);
    // for Local variable
    cout<<L<<endl;
    //for Static Variable
    int S=funStatic(5);
    cout<<S<<endl;
    //for global Variable
    int G=funGlobal(5);
    cout<<G<<endl;
    return 0;
}