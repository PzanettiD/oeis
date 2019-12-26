# Lucas numbers beginning at 2: L(n) = L(n-1) + L(n-2), L(0) = 2, L(1) = 1.
# https://oeis.org/A000032

# Algorithm to print the first n Lucas numbers with recursion.
def Lucas_recursive(n):
    if n == 0:
        return 2
    if n == 1:
        return 1;
    else:
        return Lucas_recursive(n-1) + Lucas_recursive(n-2)

# Algorithm to print the first n Lucas numbers with a bottom-up approach.
def Lucas_bu(n):
    bottom_up = [None] * n
    bottom_up[0] = 2
    bottom_up[1] = 1
    for i in range(2, n):
        bottom_up[i] = bottom_up[i - 1] + bottom_up[i - 2]
    return bottom_up

# Printing function outputs.
print("Bottom-up")
lnums = Lucas_bu(30)
for i in lnums:
    print(i, end=" ")
print()

print("Recursive")
for i in range(30):
    print(Lucas_recursive(i), end=" ")
print()


