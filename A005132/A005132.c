// Recamán's sequence: a(0) = 0; for n > 0, a(n) = a(n-1) - n if positive and not already in the sequence, otherwise a(n) = a(n-1) + n.
// http://oeis.org/A005132

# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>

//Function to verify if there is an int (x) in an array (arr) of size (size),
// returs true if there is, false if there is not.
bool inArray(int x, int *arr, int size)
{
   for (int i = 0; i < size; i++)
   {
      if (x == arr[i])
      {
         return true;
      }
   }
   return false;
}

// Function that returns the firs (n) numbers in Recaman's sequence,
// as an array (sequence).
int *rec(int n)
{
   // Initializes the array and set its first value to 0 as it is proposed.
   int *sequence = malloc(n*sizeof(int));
   sequence[0] = 0;
   for (int i = 1; i < n; i++)
   {
      // Implement the algorithm 'subtract if possible, otherwise add'.
      if (((sequence[i-1] - i) > 0) && (inArray(sequence[i-1] - i, sequence, n) == false))
      {
         sequence[i] = sequence[i-1] - i;
      }
      else
      {
         sequence[i] = sequence[i-1] + i;
      }
   }
   return sequence;
}

int main(void)
{
   // Printing the first N numbers given by the rec function.
   int N = 30;
   int *out = rec(N);
   for (int i = 0; i < N; i++)
   {
      printf("%d ", out[i]);
   }
   free(out);
   printf("\n");
}
