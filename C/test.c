#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,r,sum=0,num;
    printf("\nEnter a Number of 3 digit:");
    scanf("%d",&n);
    num=n;

    for(i=1;i<=3;i++){
        r=n%10;
        n=n/10;
        sum=sum+(r*r*r);
    }


     if(num==sum){
        printf("\nARMSTRONG NUMBER");
     }else{
         printf("\nNOT A ARMSTRONG NUMBER");

     }

return 0;}
