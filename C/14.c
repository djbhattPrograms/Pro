#include<stdio.h>
int main()
{
    int a,b,c,n;
    a=0;
    b=1;
    printf("ENTER THE NUMBER UPTO WHICH WE WANT THE SERSIS: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
            if(a==0&&b==1){
                    printf("The first two terms %d\t%d\t",a,b);
            }

    c=a+b;
    printf("%d\t",c);
    b=c;
    a=b;
    }








    return 0;
}


