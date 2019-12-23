// The prime numbers.
// https://oeis.org/A000040
// Using the Sieve of Eratosthenes

# include <cstring>
# include <iostream>
using namespace std;

// Algorithm that generates and prints list of prime numbers

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
        if (A[p] == true)
        {
            cout << p << " ";
        }
    }
    cout << "\n";
}

int main()
{
    Sieve_of_Eratosthenes(100);
}