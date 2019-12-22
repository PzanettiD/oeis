//Fibonacci numbers: F(n) = F(n-1) + F(n-2) with F(0) = 0 and F(1) = 1.
//https://oeis.org/A000045

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Algorithm to print the first n Fibonacci numbers, using a bottom_up approach
int *fib_b(int n)
{
    int *bottom_up = malloc(n*sizeof(int));
    bottom_up[0] = 0;
    bottom_up[1] = 1;
    for (int i = 2; i < n; i++)
    {
        bottom_up[i] = bottom_up[i - 1] + bottom_up[i - 2];
    }
    return bottom_up;
}

//Algorithm to print the first n Fibonacci numbers using recursion
int fib_recursive(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return fib_recursive(n - 1) + fib_recursive(n - 2);
    }
}

int main(void)
{
    // This is jus to print the first 30 fibonacci numbers, using fib_b
    printf("Bottom up\n");
    int *x = fib_b(30);
    for (int i = 0; i < 30; i ++)
    {
        printf("%d ", x[i]);
    }
    printf("\n");
    free(x);

    // Using fib_recursive to print the first 30 fibonacci numbers
    printf("Recursive\n");
    for (int j = 0; j < 30; j ++)
    {
        printf("%d ", fib_recursive(j));
    }
    printf("\n");
}