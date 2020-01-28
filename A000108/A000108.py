# Catalan numbers: C(n) = binomial(2n,n)/(n+1) = (2n)!/(n!(n+1)!). Also called Segner numbers.
# https://oeis.org/A000108

# Recursive implementation for generating catalan numbers
def catalan_recursive(n):
    if (n <= 1):
        return 1
    else:
        sum_f = 0
        for k in range(n):
            sum_f += catalan_recursive(k) * catalan_recursive(n-k-1)
    return sum_f

# Bottom-up implementation for generating catalan numbers. 
def catalan_bottom_up(n):
    b_up = [None] * n
    b_up[0] = 1
    b_up[1] = 1
    for i in range(2, n):
        sum_f = 0
        for k in range(i):
            sum_f += b_up[k] * b_up[i-k-1]
        b_up[i] = sum_f
    return b_up

# Printing the first 15 catalan numbers.
N = 15
for i in range(N):
    print(catalan_recursive(i), end=" ")
print()

cc_b = catalan_bottom_up(N)
for i in cc_b:
    print(i, end=" ")
print()
