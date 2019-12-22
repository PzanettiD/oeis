# Euler totient function phi(n): count numbers <= n and prime of n
# https://oeis.org/A000010

def gcd(p, q):
    if p == q:
        return p
    if p > q:
        return gcd(p - q, q)
    else:
        return gcd(p, q - p)

def coprime(p, q):
    if gcd(p, q) == 1:
        return True
    else:
        return False


def phi(n):
    count = 1
    temp_n = n - 1
    while temp_n >= 2:
        if coprime(n, temp_n):
            count += 1
        temp_n -= 1
    return count

for i in range(1, 30):
    print(phi(i), end=" ")
print()