# Lower Wythoff sequence (a Beatty sequence): a(n) = floor(n*phi), where phi = (1+sqrt(5))/2
# https://oeis.org/A000201

import math

# Lower Whythoff sequence function
def why_s(n):
    return math.floor(n * ((1 + math.sqrt(5))/2))

# Printing first 30 numbers in the A000201.
for number in range(1, 31):
    print(why_s(number), end=" ")
print()
