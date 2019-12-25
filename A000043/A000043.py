# Mersenne exponents: primes p such that 2^p - 1 is prime. Then 2^p - 1 is called a Mersenne prime.
# https://oeis.org/A000043

# Using Lucas–Lehmer primality test, returns true if prime, else, false, for p > 2
def Lucas_Lehmer(p):
    s = 4
    m = (2**p) - 1
    for i in range(0, p - 2):
        s = ((s*s) - 2) % m
    if s == 0:
        return True

# Printing a list of Mersenne primes among the first 1000 numbers!
mersenne = []
mersenne.append(2)
for i in range(1000):
    if Lucas_Lehmer(i):
        mersenne.append(i)
print(mersenne)
