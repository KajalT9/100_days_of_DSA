// To print the armstrong numbers between 1 to 1000 , so here we first divide the number then find the cube of the reminder and add it.
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
            sum = sum+(rem*rem*rem); // 153%10 = 5*5*5 + 3*3*3 +1*1*1 = 125+27+1 = 153
            temp= temp/10;
        }
        if(i==sum)
        {
            printf("%d ",sum);
            
        }
        i++;
    }
     
}
