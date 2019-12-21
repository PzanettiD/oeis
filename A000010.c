//Euler totient function phi(n): count numbers <= n and prime of n
//https://oeis.org/A000010
#include <stdio.h>
#include <stdbool.h>

//Find the Greatest common divisors between numbers p and q
int gcd(int p, int q)
{
    if (p == q)
    {
        return p;
    }
    if (p > q)
    {
        return gcd(p - q, q);
    }
    if (q > p)
    {
        return gcd(p, q - p);
    }
}

//Function that  returns true if numbers p and q are coprimes.
bool coprimes(int p, int q)
{
    if (gcd(p, q) == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//Couting the numbers that are smaller and primes to n
int phi(int n)
{
    int count = 1;
    int temp_n = n;
    while (temp_n >= 2)
    {
        if (coprimes(n, temp_n))
        {
            count += 1;
        }
        temp_n -= 1;
    }
    return count;
}


int main(void)
{
    //Discover the first 50 elements of this sequence
    for (int i = 1; i < 50; i ++)
    {
        printf("%d, ", phi(i));
    }
    printf("\n");
}