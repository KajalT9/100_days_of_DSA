1. Finding the number of digits of a given number :
  
 ITERATIVE METHOD
 
int countDigit(long n)
    {
      int count = 0;
      while(n!=0);
      {n =n/10:
      ++count;
      }
      return count ;
    }


OR

RECURSIVE METHOD


int countDigit(long n)
      {
        if(N==0)
        return 0;
        return 1+ countDigit(n/10);
      }

lOGARTHMIC METHOD

int countDigit(long n)
{
  return floor(log 10(n)+1);
}
