#include<stdio.h>
void namaste();
void bonjour();
int sum(int a,int b );
int main(){
   /* char type;
    printf("USER TYPE:\n\t 1.Indian\n\t 2.French\n");
    scanf("%c",&type);
    if(type=='1')
    {
        namaste();
    }else
    {
         bonjour();
    }*/
    int a,b;
    printf("Enter Two Number: ");
    scanf("%d %d",&a,&b);
    sum(a,b);





return 0;}
void namaste()
{
    printf("Namaste");
}
void bonjour()
{
    printf("Bonjour");
}

int sum(int a ,int b)
{
    printf("%d",a+b);
}
