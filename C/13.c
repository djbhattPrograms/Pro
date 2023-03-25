#include<stdio.h>
void squareArea(float side);
float circleArea(float radius);
float rectangleArea(float side1,float side2);
int main(){
    int side;
    printf("Enter the number: ");
    scanf("%f",&side);
    squareArea(side);
    circleArea(5.000);
    rectangleArea(8.000,6.000);


return 0;}
void squareArea(float side)
{
    printf("%f",side*side);
}
float circleArea(float radius)
{
    return 3.14*radius*radius;
}
float rectangleArea(float side1 , float side2)
{
    return side1*side2;
}
