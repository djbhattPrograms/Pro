#include<stdio.h>
int main()
{
 int a,b,c,n,i;
 printf("Enter the Number element of Fabonanic series:");
 scanf("%d",&n);
 a=0;
 b=1;
 for(i=0;i<=n-2;i++){
    if(a==0&&b==1){
        printf("series:%d\t%d",a,b);
    }
    c=a+b;
    printf("\t%d",c);
    a=b;
    b=c;

 }


return 0;
}

