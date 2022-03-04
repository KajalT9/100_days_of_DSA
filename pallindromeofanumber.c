//to print the pallindrome of a number within a specifc range
#include <stdio.h>
int main(){
    int i , start , end ,sum ,temp , rem ;
    printf("enter the starting value :");
    scanf("%d" , & start);
    printf("enter the ending value :");
    scanf("%d" , & end);
    
    i = start;
    while(i<end)
    {
        sum = 0 ;
        temp = i;
        while(temp){
            rem = temp%10;
            sum = sum*10+rem;
            temp= temp/10;
        }
        if(i==sum)
        {
            printf("%d ",sum);
            
        }
        i++;
    }
     
}
