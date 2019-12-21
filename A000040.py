#The prime numbers.
#https://oeis.org/A000040
# Using the Sieve of Eratosthenes

# Algorithm that generates and prints list of prime numbers
def Sieve_of_Eratosthenes(n):
    A = [True] * (n*n)
    A[0] = False
    A[1] = False
    for i in range(2, n):
        if A[i] == True:
            for j in range(i*i, n, i):
                A[j] = False
    
    for p in range(0, n):
        if A[p] == True:
            print(p, end=" ")
    print() 

#Prints the primes amongst the first 100 natural numbers
Sieve_of_Eratosthenes(100)
