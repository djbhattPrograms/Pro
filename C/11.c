#include<stdio.h>
void printTable(int a);
int main(){
    int n;
    printf("\nEnter number: ");
    scanf("%d",&n);
    printTable(n);


return 0;}
void printTable(int a)
{



    for(int i=1;i<=10;i++)
    {
        printf("\n %d x %d = %d \n", a,i,a*i);
    }

}
