#include<stdio.h>
int main(){
    int n;
    // break --> it breaks out from the all loops
    // continue --> skip
  /*




   do
    {
        printf("Enter Number: ");
        scanf("%d",&n);
        printf("%d\n",n);

        if ( n%7==0){
            break;
        }
    }while(1);
    printf("Thanks");




    for(int j=1;j<=10;j++){
        if(j==6){
            continue;

        }printf("%d\n", j);
    }

    for(int j=5;j<=50;j++){
        if(j%2!=0){
            printf("%d\n",j);
        }

    }*/
    int fac=1;
    printf("Enter Number: ");
    scanf("%d",&n);

    for(int j=1;j<=n;j++){
        fac=fac*j;
    }
    printf("%d",fac);








return 0;}
