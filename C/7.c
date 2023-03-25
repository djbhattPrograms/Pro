#include<stdio.h>
int main(){
    // while(_condition_)
    // { do something}
    int i,j,n,sum=0; // intialisation
    
    printf("Enter the number: ");
    scanf("%d",&n);


    // while (i<=n)
    // {
    //     printf("%d\n",i);
    //     i++;
    // }
    


    // for(i=0;i<=n;i++){
    //     printf("%d \n",i);
    // }
   
   
    // int j=0;
    // do{
    //     printf("First");
    //     j++;
    // }while(j<=n);



    // for (i=1,j=n;i<=n && j>=1;i++,j--)
    // {
    //     sum=sum+i;
    //      printf("%d\n",j);
    // }



    // for( i=n;i>=1;i--){
    //     printf("%d\n",i);
    // }
    // printf("\nThe sum of first %d natural number is %d",n,sum);




    // for ( i = 1; i <=10; i++)
    // {
    //     printf("\n %d x %d = %d ", n,i,n*i);
    // }

// break statement
// break----> break out of the loop

    // for(i=1;i<=5;i++){
    //     if (i==3)
    //     {
    //         break;
    //     }
    //     printf("%d\n",i);
    // }
    // printf("end");

do
{
     printf("Enter the number: ");
     scanf("%d\n",&n);

     if(n%2!=0){
        break;
     }
    
} while (1);
printf("Thanks");


    
    






return 0;}

