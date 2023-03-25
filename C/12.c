#include<stdio.h>

void calculateTotal(float n);
int main(){
    float n;
    printf("Enter a Number:");
    scanf("%f",&n);
    calculateTotal(n);


return 0;}
void calculateTotal(float n)
{
    n=n+(0.18*n);
    printf("THE TOTAL VALUE OF THE THING:%f",n);

}
