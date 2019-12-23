// Triangular numbers: a(n) = binomial(n+1,2) = n(n+1)/2 = 0 + 1 + 2 + ... + n.
// http://oeis.org/A000217

#include <stdio.h>

// Algorithm given by the sum of the arithmetic progression 1 + 2 + 3 + ... + n
int T(int n)
{
    return (n*(n+1))/2;
}

int main(void)
{
    printf("n*(n+1)/2 algorithm\n");
    for (int i = 0; i < 30; i++)
    {
        printf("%d ", T(i));
    }
    printf("\n");
}

