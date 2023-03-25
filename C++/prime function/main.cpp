#include <iostream>

using namespace std;
bool isprime(int num){
for(int i=2;i<num;i++){
    if(num%i==0){
     return false;
    }
    return true;
}
}

int main()
{
    int A;
    cout<<"ENTER A NUMBER : ";
    cin>>A;


    cout << isprime(A) << endl;
    return 0;
}
