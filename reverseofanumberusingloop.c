// Finding the reverse of a number using for loop
#include<stdio.h>
int main ()
{
    int i , rem , sum ; 
    printf("enter a value : "); // entering the value of whose reverse need to be found
    scanf("%d" , & i);
    sum = 0 ; // output
    for(;i>0;) // input should be greater than zero 
    {
        rem = i %10 ; // get the reminder
        sum = sum* 10 +rem ; 
        i= i/10 ; 
    }
    printf("reverse of a number %d is %d " , i , sum  );
}
