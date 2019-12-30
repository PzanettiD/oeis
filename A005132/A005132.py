# Recamán's sequence (or Recaman's sequence): a(0) = 0; for n > 0, a(n) = a(n-1) - n if positive and not already in the sequence, otherwise a(n) = a(n-1) + n.
# http://oeis.org/A005132

# Function that returns the first (n) numbers in the Recaman's sequence as a list (sequence).
def rec(n):
    # Initializes the list sequences and set its first value to 0, as it is proposed.
    sequence = [None] * n
    sequence[0] = 0
    for i in range(1, n):
        # Implement the algorithm 'subtract if possible, otherwise add'.
        if (sequence[i-1] - i) > 0 and (sequence[i-1] - i) not in sequence:
            sequence[i] = sequence[i-1] - i
        else:
            sequence[i] = sequence[i-1] + i
    return sequence

# Printing the first N numbers given by the rec function.
N = 30
out = rec(N)
for i in out:
    print(i, end=" ")
print()
