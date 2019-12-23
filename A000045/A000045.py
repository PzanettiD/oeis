#Fibonacci numbers: F(n) = F(n-1) + F(n-2) with F(0) = 0 and F(1) = 1.
#https://oeis.org/A000045

#Algorithm to print the first n Fibonacci numbers, using a bottom_up approach
def fib_b(n):
    bottom_up = [None] * n
    bottom_up[0] = 0
    bottom_up[1] = 1
    for i in range(2, n):
        bottom_up[i] = bottom_up[i - 1] + bottom_up[i - 2]
    return bottom_up

#Algorithm to print the first n Fibonacci numbers using recursion
def fib_recursive(n):
    if n == 0:
        return 0
    if n == 1:
        return 1
    else:
        return fib_recursive(n-1) + fib_recursive(n-2)

# Printing function outputs
fibn = fib_b(30)
print("Bottom-up")
for i in range(30):
    print(fibn[i], end =' ')
print()

print("Recursion")
for i in range(0, 30):
    print(fib_recursive(i), end=' ')
print()