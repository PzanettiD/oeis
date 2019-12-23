// Euler totient function phi(n): count numbers <= n and prime of n
// https://oeis.org/A000010

# include <iostream>
using namespace std;

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
    else if (q > p)
    {
        return gcd(p, q - p);
    }
}

bool coprime(int p, int q)
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

int phi(int n)
{
    int count = 1;
    int temp_n = n - 1;
    while (temp_n >= 2)
    {
        if (coprime(n, temp_n))
        {
            count += 1;
        }
        temp_n -= 1; 
    }
    return count;
} 


int main()
{
    for (int i = 1; i < 30; i ++)
    {
        cout << phi(i) << " ";
    }
    cout << "\n";
}