#include<stdio.h>
int main(){
//Datetype Change
    printf("%f\n",2.0*2);
    printf("%d\n",2/3);//only the integer value of the division
    printf("%f\n",2.0/3);// total value of the division

// int to float 2-->4(inplicit conversion)
    float a=1;
    printf("%f\n",a);
// float to int 4-->2(explicit conversion)>> done by the programmer
    int b =(int)1.99999;
    printf("%d\n",b);


/*
------Operator Precedences---------
         *,/,% > +,- > =
         1)!
         2)*,/,%
         3)+,-
         4)<,<=,>,>=
         5)==,!=
         6)&&
         7)||
         6)=


-------Associativity(for same precedence)---------
              left to right



*/


/*
-----control instruction------
>>Sequence Control
>>Decision Control
>>Loop Control
>>Case Control


-------Operator-------
>>Arithmetic Operators (+,-,*,/,%)

>>Relational Operators
   -->  ==  (Equal or comperision )
   --> >,>= (Greater than, Greater than equal)
   --> <,<=
   -->  !=

>> Logical Operators
   --> &&(Both/And)
   --> || (Only One/Or)
   -->  !  (Not)

>>Bitwise Operators

>> Assignment Operators
    --> =  (use in Assignment)
    --> += (a-=b <--> a=a-b)
    --> -=  (a+=b <--> a=a+b)
    --> *=
>>Ternary Operators
*/





return 0;}
