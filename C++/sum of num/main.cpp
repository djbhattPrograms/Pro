#include <iostream>

using namespace std;
int sum(int num){
int answer=0;
for(int i=1;i<=num;i++){
   answer=answer+i;
}return answer;
}

int main()
{
 int n;
 cin>>n;
 cout<<sum(n)<<endl;
    return 0;
}
