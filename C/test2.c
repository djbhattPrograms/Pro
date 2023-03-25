#include<stdio.h>
int main(){
    char ch;
    printf("\nENTER A CHARACTER:");
    scanf("%d",&ch);
    if(ch>='A'&&ch<='Z'){
        printf("Upper Case");
    }else if(ch>='a'&&ch<='z')
    {
        printf("Lower Case");
    }else
    {
        printf("Not English");
    }



return 0;}
