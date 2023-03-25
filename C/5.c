#include<stdio.h>
/*
>>Conditional Statement
  -->if-else if-else
     >if(condition){
        //do something
        }
      else{
        //do something
      }
  -->switch
*/
int main(){
    /*int age;
    printf("\tEnter your age: ");
    scanf("\t%d",&age);


    if(age>=18 && age<=50){
        printf("You are a Adult and good for sex");

    }else if(age>=50){
        printf("You are a Adult but not good for sex");

    }

    else{
        printf("You are not a Adult\n");

    }*/




    /*
    ------------ternary operator-------------------
    condition?doSomething if TRUE: doSomething if FALSE;


    int age;
    printf("\tEnter your age: ");
    scanf("\t%d",&age);

    age>=18?printf("Adult"):printf("child");*/



    /*
    Switch(number/variable){
      case:
      //doSomething
      break;
      defult:

    }
    */

    int day;
    printf("Enter a day: \t\n 1.Monday\t\n 2.Tuesday\t\n 3.Wednesday\t\n 4.Thrusday\t\n 5.Firday\t\n 6.Saturday\t\n 7.Sunday");
    scanf("%d",&day);
    switch(day){
        case 1 : printf("Monday\n");break;
        case 2 : printf("Tuesday\n");break;
        case 3 : printf("Wednesday\n");break;
        case 4 : printf("Thrusday\n");break;
        case 5 : printf("Firday\n");break;
        case 6 : printf("Saturday\n");break;
        case 7 : printf("Sunday\n");break;
        default:printf("Invaild Input\n");break;

        }











return 0;}
