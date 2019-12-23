//The prime numbers.
//https://oeis.org/A000040
//Using the Sieve of Eratosthenes
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Algorithm that finds and prints prime numbers within a number range of N.
void Sieve_of_Eratosthenes(int n)
{
    bool A[n*n];
    memset(A, true, n*n*sizeof(bool));
    A[0] = false;
    A[1] = false;
    for (int i = 2; i < n; i++)
    {
        if (A[i])
        {
            for (int j = i * i; j < n; j += i)
            {
                A[j] = false;
            }
        }
    }

    for (int p = 0; p < n; p++)
    {
        if (A[p])
        {
            printf("%d ", p);
        }
    }
    printf("\n");
}

int main(void)
{
    // Find all the primes among the numbers 0 to 100
    Sieve_of_Eratosthenes(100);
}