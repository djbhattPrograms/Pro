#include<stdio.h>
int main(){
    int i;//iterator
    //for(initialisation;condition;updation
    int a=1;
    //post increment >> save to the memory then print
    printf("%d\n",a++);
    printf("%d\n",a);

    int b=1;
    //pre increment >> print then save to the memory
    printf("%d\n",++a);
    printf("%d\n",a);


    for(i=0;i<=10;i+=1){
        printf("%d ",i);
        printf("Hello,World\n");

    }

// Float datatype in for loops
    for(float e=1.0;e<=5.0;e++){
        printf("%f\n",e);
    }
// char datatypes in for loops
       for(char ch='a';ch<='z';ch++){
        printf("%c\n",ch);
    }
// infinite loops
       for(int f=1.0;;f++){
        printf("%d\n",f);
    }





return 0;}
