#include <stdio.h>

int main()
{
    int input_num , num1 , num2 , rem  ;
    printf("enter a positive number: "); //12345 is the input suppose 
    scanf("%d" , & input_num); //taking the input value 
    
    num1= 0 , num2 =0 ;
    while(input_num > 0) // Operations can only be performed on positive integer 
    {
        rem = input_num%10; // splitting the digits 
        if(rem %2 ==0) // checking the condition to be even 
        {
           num1 = num1+(rem*rem);  
        }
        else
        {
            num2 = num2 + ((rem+1)*5);
        }
        input_num = input_num/10 ;
    }
    
    printf("Final result is : %d " ,(num1+num2));
    return 0;
}
