// To print perfect numbers 
/* perfect numbers are such that exculding itself if we add the other factors we get the exact number for example 
 6 = 1+2+3 we get 6 back thus we can say that its a perfect number */
 
#include<stdio.h>
int main()
{
    int sum , n ,i ;
    printf("enter the number :");
    scanf("%d" , &n);
    for(i=1 ; i<n ;i++)
    {
        if(n%1==0)
        sum=sum+1;
    }
    if(sum ==n)
    printf("It is a perfect number " , n);
    else
    printf("It is not a perfect number " ,n);
    return 0 ;
}
