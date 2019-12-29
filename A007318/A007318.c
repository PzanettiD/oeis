// Pascal's triangle read by rows: C(n,k) = binomial(n,k) = n!/(k!*(n-k)!), 0 <= k <= n.
// https://oeis.org/A007318

# include <string.h>
# include <stdio.h>
# include <stdlib.h>

// Algorithm to calculate Pascal's numbers given the number of rows (n),
// and returns a matrix (pm) with the 'triangles' rows and columns.
int **pascal(int n)
{
   int i = 1;
   int **pm = malloc(n*n);
   while (i <= n)
   {
      // Adds the columns to the matrix (pm), each row has an increasing number of columns and they are initialized with the value 1.
      int *pm_temp = calloc(i, sizeof(int));
      for (int s = 0; s < i; s++)
      {
         pm_temp[s] = 1;
      }
      // Implements the addition of two pairs of numbers.
      if (i >= 3)
      {
         for (int j = 1; j < i-1; j++)
         {
            pm_temp[j] = pm[i-2][j-1] + pm[i-2][j];
         }
      }
      pm[i-1] = pm_temp;
      i += 1;
   }
   return pm;
}

int main(void)
{
   // Prints out the 10 rows of the Pascal's triangle.
   int N = 10;
   int **out = pascal(N);
   for (int i = 0; i < N; i++)
   {
      int *temp = out[i];
      for (int j = 0; j <= i; j++)
      {
         printf("%d ", temp[j]);
      }
   }
   free(out);
   printf("\n");
}
