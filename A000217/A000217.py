# Triangular numbers: a(n) = binomial(n+1,2) = n(n+1)/2 = 0 + 1 + 2 + ... + n.
# http://oeis.org/A000217

import math

# Algorithm given by sum of arithmetic progression
print("n*(n+1)/2 algorithm")
def T(n):
    return int(n*(n+1)/2)
for i in range(30):
    print(T(i), end=" ")
print();

# Algorithm given by the binomial(n+1, 2)
print("binomial(n+1, 2)")
def binomial_coefficient(n, k):
    if n < k:
        return 0
    else:
        return int(math.factorial(n)/(math.factorial(k)*math.factorial(n - k)))
for i in range(0, 30):
    print(binomial_coefficient(i+1, 2), end=" ")
print()
