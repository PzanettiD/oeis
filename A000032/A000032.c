# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int Lucas_recursive(int n)
{
   if (n == 0)
   {
      return 2;
   }
   if (n == 1)
   {
      return 1;
   }
   else
   {
      return Lucas_recursive(n-1) + Lucas_recursive(n-2);
   }
}
