// Printing the reverse of a number //
#include <stdio.h>
int
main ()
{
  int n, rem, sum;
  printf ("enter the value of the number whose reverse needs to be found :");
  scanf ("%d", &n);
  sum = 0;
  while (n > 0)
    {
      rem = n % 10;
      sum = sum * 10 + rem;
      n = n / 10;
    }
  printf ("%d the reverse number is %d", n, sum);
}
