// Lucas numbers beginning at 2: L(n) = L(n-1) + L(n-2), L(0) = 2, L(1) = 1.
// https://oeis.org/A000032

# include <stdio.h>
# include <string.h>
# include <stdlib.h>

// Algorithm to print the first n Lucas numbers with recursion.
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

// Algorithm to print the first n Lucas numbers with a bottom-up approach.
int *Lucas_bu(int n)
{
   int *bottom_up = malloc(n*sizeof(int));
   bottom_up[0] = 2;
   bottom_up[1] = 1;
   for (int i = 2; i < n; i++)
   {
      bottom_up[i] = bottom_up[i-1] + bottom_up[i-2];
   }
   return bottom_up;
}

int main(void)
{
   // Printing function outputs.
   printf("Bottom-up\n");
   int *x = Lucas_bu(30);
   for (int j = 0; j < 30; j++)
   {
      printf("%d ", x[j]);
   }
   printf("\n");
   free(x);

   printf("Recursive\n");
   for (int i = 0; i < 30; i++)
   {
      printf("%d ", Lucas_recursive(i));
   }
   printf("\n");
}

